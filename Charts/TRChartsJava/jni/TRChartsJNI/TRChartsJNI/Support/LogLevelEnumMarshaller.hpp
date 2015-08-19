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

#ifndef TRChartsJNI_Support_LogLevelEnumMarshaller_hpp
#define TRChartsJNI_Support_LogLevelEnumMarshaller_hpp

#include <TRChartsJNI/Support/BasicObjectMarshaller.hpp>
#include <TRCharts/LogLevel.hpp>

namespace TRChartsJNI
{
	class LogLevelEnumMarshaller : public BasicObjectMarshaller<Charts::LogLevel, jobject>
	{
	public:
		virtual Charts::LogLevel marshall(JNIEnv * env, const jobject & in) const;

		virtual jobject unmarshall(JNIEnv * env, const Charts::LogLevel & in) const;
	};
}

#endif