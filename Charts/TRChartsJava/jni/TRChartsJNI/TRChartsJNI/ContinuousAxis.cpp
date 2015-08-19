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

#include <TRChartsJNI/ContinuousAxis.hpp>
#include <TRChartsJNI/Support/Marshallers.hpp>
#include <TRChartsJNI/Support/Handle.hpp>
#include <TRChartsJNI/Support/Utils.hpp>
#include <TRCharts/ContinuousAxis.hpp>

using namespace TRChartsJNI;

JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_ContinuousAxis_nativeGetLayout(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getAxisLayoutMarshaller().unmarshall(env, handle->getNativeObject<Charts::ContinuousAxis>(env)->getLayout());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_ContinuousAxis_nativeSetLayout(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::ContinuousAxis>(env)->setLayout(TRChartsJNI::getAxisLayoutMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_ContinuousAxis_nativeGetRangeCalculator(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getRangeCalculatorMarshaller().unmarshall(env, handle->getNativeObject<Charts::ContinuousAxis>(env)->getRangeCalculator());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_ContinuousAxis_nativeSetRangeCalculator(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::ContinuousAxis>(env)->setRangeCalculator(TRChartsJNI::getRangeCalculatorMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_ContinuousAxis_nativeGetValueTransform(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getDataTransformMarshaller().unmarshall(env, handle->getNativeObject<Charts::ContinuousAxis>(env)->getValueTransform());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT void JNICALL Java_com_thomsonreuters_corptech_charts_ContinuousAxis_nativeSetValueTransform(JNIEnv * env, jobject obj, jlong ptr, jobject value)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		handle->getNativeObject<Charts::ContinuousAxis>(env)->setValueTransform(TRChartsJNI::getDataTransformMarshaller().marshall(env, value));
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}
JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_ContinuousAxis_nativeGetDataRange(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getRangeMarshaller().unmarshall(env, handle->getNativeObject<Charts::ContinuousAxis>(env)->getDataRange());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

JNIEXPORT jobject JNICALL Java_com_thomsonreuters_corptech_charts_ContinuousAxis_nativeGetScreenDataRange(JNIEnv * env, jobject obj, jlong ptr)
{
	try {
		Utils::threadEnter(env);
		Utils::EndScopeAction threadExitAction(Utils::threadExit);
		TRChartsJNI::Handle * const handle = reinterpret_cast<TRChartsJNI::Handle *>(ptr);
		return TRChartsJNI::getRangeMarshaller().unmarshall(env, handle->getNativeObject<Charts::ContinuousAxis>(env)->getScreenDataRange());
	} catch (const std::exception & e) {
		Utils::throwJavaException(env, e.what());
	} catch (...) {
		Utils::throwJavaException(env, nullptr);
	}
}

