/*
**
** Copyright 2008, The Android Open Source Project
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

#define LOG_TAG "mediaserver"
//#define LOG_NDEBUG 0

#include <aicu/AIcu.h>
#include <binder/IPCThreadState.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
#include <hidl/HidlTransportSupport.h>
#include <utils/Log.h>
#include "RegisterExtensions.h"

// from LOCAL_C_INCLUDES
#include "MediaPlayerService.h"
#include "ResourceManagerService.h"

using namespace android;

int main(int argc __unused, char **argv __unused)
{
    signal(SIGPIPE, SIG_IGN);

    sp<ProcessState> proc(ProcessState::self());    // 获取processstate实例对象
    sp<IServiceManager> sm(defaultServiceManager());// 获取BpServiceManager对象 即Servicemanager的代理对象
    ALOGI("ServiceManager: %p", sm.get());
    AIcu_initializeIcuOrDie();
    //  注册多媒体服务: 函数内部 将“media.player”服务通过servicemanager注册到底层
    MediaPlayerService::instantiate();
    ResourceManagerService::instantiate();
    registerExtensions();
    ::android::hardware::configureRpcThreadpool(16, false);
    // 启动Binder线程池
    ProcessState::self()->startThreadPool();
    // 当前线程加入到线程池
    IPCThreadState::self()->joinThreadPool();
    ::android::hardware::joinRpcThreadpool();
}
