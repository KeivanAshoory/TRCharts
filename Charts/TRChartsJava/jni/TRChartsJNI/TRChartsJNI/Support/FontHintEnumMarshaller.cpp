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

#include <TRChartsJNI/Support/FontHintEnumMarshaller.hpp>
#include <TRChartsJNI/Support/Marshallers.hpp>
#include <TRChartsJNI/Support/Utils.hpp>

using namespace TRChartsJNI;
using namespace Charts;

namespace
{
	bool inited = false;
	jclass cls;
	jobject values[2];

	void checkInited(JNIEnv * const env)
	{
		if(!::inited) {
			::inited = true;
			::cls = (jclass)env->NewGlobalRef(env->FindClass("com/thomsonreuters/corptech/charts/FontHint"));
			const char * valueNames[2] = {
				"ACCURATE",
				"FAST"
			};
			for(size_t i = 0; i != 2; ++i) {
				const jfieldID fid = env->GetStaticFieldID(::cls, valueNames[i], "Lcom/thomsonreuters/corptech/charts/FontHint;");
				::values[i] = env->NewGlobalRef(env->GetStaticObjectField(::cls, fid));
			}
		}
	}
}

FontHint FontHintEnumMarshaller::marshall(JNIEnv * const env, const jobject & in) const
{
	return static_cast<FontHint>(Utils::enumOrdinal(env, in));
}

jobject FontHintEnumMarshaller::unmarshall(JNIEnv * const env, const FontHint & in) const
{
	::checkInited(env);
	return values[static_cast<int>(in)];
}