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

#include <TRChartsJNI/Support/OHLCStructMarshaller.hpp>
#include <TRChartsJNI/Support/Marshallers.hpp>

using namespace TRChartsJNI;
using namespace Charts;

namespace
{
	bool inited = false;
	jclass cls;
	jmethodID ctor;
	jfieldID fidOpen;
	jfieldID fidHigh;
	jfieldID fidLow;
	jfieldID fidClose;

	void checkInited(JNIEnv * const env)
	{
		if(!::inited) {
			::inited = true;
			::cls = (jclass)env->NewGlobalRef(env->FindClass("com/thomsonreuters/corptech/charts/OHLC"));
			::ctor = env->GetMethodID(::cls, "<init>", "()V");
			::fidOpen = env->GetFieldID(cls, "open", "D");
			::fidHigh = env->GetFieldID(cls, "high", "D");
			::fidLow = env->GetFieldID(cls, "low", "D");
			::fidClose = env->GetFieldID(cls, "close", "D");
		}
	}
}

OHLC OHLCStructMarshaller::marshall(JNIEnv * const env, const jobject & in) const
{
	::checkInited(env);
	OHLC out;
	out.open = TRChartsJNI::getNumberMarshaller().getFieldValue(env, in, ::fidOpen);
	out.high = TRChartsJNI::getNumberMarshaller().getFieldValue(env, in, ::fidHigh);
	out.low = TRChartsJNI::getNumberMarshaller().getFieldValue(env, in, ::fidLow);
	out.close = TRChartsJNI::getNumberMarshaller().getFieldValue(env, in, ::fidClose);
	return out;
}

jobject OHLCStructMarshaller::unmarshall(JNIEnv * const env, const OHLC & in) const
{
	::checkInited(env);
	jobject out = env->NewObject(::cls, ::ctor);
	TRChartsJNI::getNumberMarshaller().setFieldValue(env, out, ::fidOpen, in.open);
	TRChartsJNI::getNumberMarshaller().setFieldValue(env, out, ::fidHigh, in.high);
	TRChartsJNI::getNumberMarshaller().setFieldValue(env, out, ::fidLow, in.low);
	TRChartsJNI::getNumberMarshaller().setFieldValue(env, out, ::fidClose, in.close);
	return out;
}

OHLC OHLCStructMarshaller::getFieldValue(JNIEnv * const env, const jobject obj, const jfieldID fieldID) const
{
	return marshall(env, env->GetObjectField(obj, fieldID));
}

void OHLCStructMarshaller::setFieldValue(JNIEnv * const env, const jobject obj, const jfieldID fieldID, const OHLC & value) const
{
	env->SetObjectField(obj, fieldID, unmarshall(env, value));
}

OHLC OHLCStructMarshaller::callMethod(JNIEnv * const env, const jobject obj, const jmethodID methodID, jvalue * const args) const
{
	return marshall(env, env->CallObjectMethodA(obj, methodID, args));
}