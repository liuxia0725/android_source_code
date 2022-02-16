/*
 * Copyright (C) 2010 The Android Open Source Project
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

#ifndef _INIT_TOKENIZER_H_
#define _INIT_TOKENIZER_H_

#define T_EOF 0
#define T_TEXT 1
#define T_NEWLINE 2

namespace android {
namespace init {

struct parse_state
{
    char *ptr;  // 要解析的字符串
    char *text; // 要解析到的字符串，可以理解为返回一行数据
    int line;   // 解析到第几行
    int nexttoken;  // 解析状态，有下边三种：T_EOF 表示字符串解析结束，T_NEWLINE 表示解析完一行的数据，T_TEXT 表示解析到一个单词
};

int next_token(struct parse_state *state);

}  // namespace init
}  // namespace android

#endif
