/*
 * Copyright (C) 2019 The Android Open Source Project
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

package android.gsi;

/** {@hide} */
interface IProgressCallback {
    /**
     * Report progress for a long-running task.
     *
     * The percentage can be computed using current / total. The task is
     * done when current == total.
     *
     * Different APIs may have different meanings for the parameters; see
     * specific APIs for details.
     *
     * @param current   a value indicating the current progress. Should be treated as uint64.
     * @param total     a value indicating 100% progress. Should be treated as uint64.
     */
    void onProgress(long current, long total);
}
