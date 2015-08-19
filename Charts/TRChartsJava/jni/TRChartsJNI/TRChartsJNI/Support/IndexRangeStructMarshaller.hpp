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

#ifndef TRChartsJNI_Support_IndexRangeStructMarshaller_hpp
#define TRChartsJNI_Support_IndexRangeStructMarshaller_hpp

#include <TRChartsJNI/Support/BasicObjectMarshaller.hpp>
#include <TRCharts/IndexRange.hpp>

namespace TRChartsJNI
{
	class IndexRangeStructMarshaller : public BasicObjectMarshaller<Charts::IndexRange, jobject>
	{
	public:
		virtual Charts::IndexRange marshall(JNIEnv * env, const jobject & in) const;

		virtual jobject unmarshall(JNIEnv * env, const Charts::IndexRange & in) const;

		virtual Charts::IndexRange getFieldValue(JNIEnv * env, jobject obj, jfieldID fieldID) const;

		virtual void setFieldValue(JNIEnv * env, jobject obj, jfieldID fieldID, const Charts::IndexRange & value) const;

		virtual Charts::IndexRange callMethod(JNIEnv * env, jobject obj, jmethodID methodID, jvalue * args) const;
	};
}

#endif