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

#import <TRCodegenSupportObjc/Marshaller.hh>
#import <TRChartsObjc/RangeDatum.h>
#import <TRCharts/RangeDatum.hpp>

namespace TRChartsObjc
{
	
	class RangeDatumStructMarshaller : public CodegenSupportObjc::Marshaller<Charts::RangeDatum, id>
	{
	public:
		virtual Charts::RangeDatum marshall(const CodegenSupportObjc::StrongAnyPtr & in) const;

		virtual CodegenSupportObjc::StrongAnyPtr unmarshall(const Charts::RangeDatum & in) const;

		virtual Charts::RangeDatum marshallBoxed(const id & in) const;

		virtual id unmarshallBoxed(const Charts::RangeDatum & in) const;

		virtual void init(void) const;
	private:
	};
}
