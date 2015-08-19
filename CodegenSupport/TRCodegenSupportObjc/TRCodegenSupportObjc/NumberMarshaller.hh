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

#import <TRCodegenSupportObjc/Marshaller.hh>

namespace CodegenSupportObjc
{
	class NumberMarshaller : public Marshaller<double, double>
	{
	public:
		virtual double marshall(const double & in) const;

		virtual double unmarshall(const double & in) const;

		virtual double marshallBoxed(const id & in) const;

		virtual id unmarshallBoxed(const double & in) const;
	};
}