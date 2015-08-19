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

#include <TRChartsJNI/Support/CoordinatesStructMarshaller.hpp>
#include <TRChartsJNI/Support/Marshallers.hpp>

using namespace TRChartsJNI;
using namespace Charts;

namespace
{
	bool inited = false;
	jclass cls;
	jmethodID ctor;
	jfieldID fidAbscissa;
	jfieldID fidOrdinate;

	void checkInited(JNIEnv * const env)
	{
		if(!::inited) {
			::inited = true;
			::cls = (jclass)env->NewGlobalRef(env->FindClass("com/thomsonreuters/corptech/charts/Coordinates"));
			::ctor = env->GetMethodID(::cls, "<init>", "()V");
			::fidAbscissa = env->GetFieldID(cls, "abscissa", "D");
			::fidOrdinate = env->GetFieldID(cls, "ordinate", "D");
		}
	}
}

Coordinates CoordinatesStructMarshaller::marshall(JNIEnv * const env, const jobject & in) const
{
	::checkInited(env);
	Coordinates out;
	out.abscissa = TRChartsJNI::getNumberMarshaller().getFieldValue(env, in, ::fidAbscissa);
	out.ordinate = TRChartsJNI::getNumberMarshaller().getFieldValue(env, in, ::fidOrdinate);
	return out;
}

jobject CoordinatesStructMarshaller::unmarshall(JNIEnv * const env, const Coordinates & in) const
{
	::checkInited(env);
	jobject out = env->NewObject(::cls, ::ctor);
	TRChartsJNI::getNumberMarshaller().setFieldValue(env, out, ::fidAbscissa, in.abscissa);
	TRChartsJNI::getNumberMarshaller().setFieldValue(env, out, ::fidOrdinate, in.ordinate);
	return out;
}

Coordinates CoordinatesStructMarshaller::getFieldValue(JNIEnv * const env, const jobject obj, const jfieldID fieldID) const
{
	return marshall(env, env->GetObjectField(obj, fieldID));
}

void CoordinatesStructMarshaller::setFieldValue(JNIEnv * const env, const jobject obj, const jfieldID fieldID, const Coordinates & value) const
{
	env->SetObjectField(obj, fieldID, unmarshall(env, value));
}

Coordinates CoordinatesStructMarshaller::callMethod(JNIEnv * const env, const jobject obj, const jmethodID methodID, jvalue * const args) const
{
	return marshall(env, env->CallObjectMethodA(obj, methodID, args));
}