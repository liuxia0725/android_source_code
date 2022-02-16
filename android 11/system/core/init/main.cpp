/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "builtins.h"
#include "first_stage_init.h"
#include "init.h"
#include "selinux.h"
#include "subcontext.h"
#include "ueventd.h"

#include <android-base/logging.h>

#if __has_feature(address_sanitizer)
#include <sanitizer/asan_interface.h>
#endif

#if __has_feature(address_sanitizer)
// Load asan.options if it exists since these are not yet in the environment.
// Always ensure detect_container_overflow=0 as there are false positives with this check.
// Always ensure abort_on_error=1 to ensure we reboot to bootloader for development builds.
extern "C" const char* __asan_default_options() {
    return "include_if_exists=/system/asan.options:detect_container_overflow=0:abort_on_error=1";
}

__attribute__((no_sanitize("address", "memory", "thread", "undefined"))) extern "C" void
__sanitizer_report_error_summary(const char* summary) {
    LOG(ERROR) << "Init (error summary): " << summary;
}

__attribute__((no_sanitize("address", "memory", "thread", "undefined"))) static void
AsanReportCallback(const char* str) {
    LOG(ERROR) << "Init: " << str;
}
#endif

using namespace android::init;
/*
    C++中主函数有两个参数，第一个参数argc表示参数个数，第二个参数是参数列表，也就是具体的参数 
*/

int main(int argc, char** argv) {
#if __has_feature(address_sanitizer)
    __asan_set_error_report_callback(AsanReportCallback);
#endif

    if (!strcmp(basename(argv[0]), "ueventd")) {
        // ueventd_main,ueventd主要是负责设备节点的创建、权限设定等一 些列工作
        return ueventd_main(argc, argv);
    }

    if (argc > 1) {
        if (!strcmp(argv[1], "subcontext")) {
            android::base::InitLogging(argv, &android::base::KernelLogger);
            const BuiltinFunctionMap& function_map = GetBuiltinFunctionMap();   //命令映射表

            return SubcontextMain(argc, argv, &function_map);
        }

        if (!strcmp(argv[1], "selinux_setup")) {// selinux的初始化设置
            return SetupSelinux(argv);
        }

        if (!strcmp(argv[1], "second_stage")) {
            return SecondStageMain(argc, argv);  //init的第二阶段初始化 rc文件在这里进行了 解析
        }
    }

    return FirstStageMain(argc, argv); 
    //init的第一阶段初始化 主要是挂载文件以及文件夹、挂载分区（这包括所有包含系统代码的分区）当此这些都结束了自后，会执行
    //execs /system/bin/init 并以“selinux_setup”作为参数,在这个阶段，SELinux可选地编译并加载到系统中，这个阶段主要是加载初始化selinux相关的东西，关于此更多的细节在Selinux.cpp中；
    // 这里执行之后，他将再次使用second_stage参数执行/system/bin/init。此时，init的主要阶段将运行并通过init继续引导init.rc脚本。
}
