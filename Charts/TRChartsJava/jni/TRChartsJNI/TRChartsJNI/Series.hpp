/*******************************************************************************
 * Copyright 2015 Thomson Reuters
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *******************************************************************************/
/* NOTE: This file is autogenerated, do not edit this file directly.*/

#ifndef TRChartsJNI_Series_hpp
#define TRChartsJNI_Series_hpp

#include <TRChartsJNI/Support/Common.hpp>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_Series_nativeGetOrdinateAxis(JNIEnv * env, jobject obj, jlong ptr);

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Series_nativeSetOrdinateAxis(JNIEnv * env, jobject obj, jlong ptr, jobject value);

JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_Series_nativeGetColor(JNIEnv * env, jobject obj, jlong ptr);

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Series_nativeSetColor(JNIEnv * env, jobject obj, jlong ptr, jobject value);

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Series_nativeMarkDirty(JNIEnv * env, jobject obj, jlong ptr);

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_Series_nativeMarkRangeDirty(JNIEnv * env, jobject obj, jlong ptr, jobject range);

#ifdef __cplusplus
}
#endif
#endif