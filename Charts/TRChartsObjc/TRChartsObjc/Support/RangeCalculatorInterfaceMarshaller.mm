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

#include <TRChartsObjc/Support/RangeCalculatorInterfaceMarshaller.hh>
#include <TRChartsObjc/Support/Marshallers.hh>
#include <TRCodegenSupportObjc/Handle.hh>
#include <TRCodegenSupportObjc/BaseObject.h>


class TRChartsObjc::RangeCalculatorInterfaceMarshaller::Proxy : public Charts::RangeCalculator
{
public:
	Proxy(const RangeCalculatorInterfaceMarshaller & marshaller, CodegenSupportObjc::StrongAnyPtr hostObject);

	virtual ~Proxy(void);

	CodegenSupportObjc::StrongAnyPtr getHostObject(void) const;

	virtual Charts::Range calculateRange(const Charts::Range & dataRange) const;

private:
	const RangeCalculatorInterfaceMarshaller & marshaller;
	mutable id __strong strongHostObject;
};



std::shared_ptr<Charts::RangeCalculator> TRChartsObjc::RangeCalculatorInterfaceMarshaller::marshall(const CodegenSupportObjc::StrongAnyPtr & in) const
{
	if(in) {
		if([in isKindOfClass:[TRBaseObject class]]) {
			CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([in handle]);
			return handle->getNativeObject<Charts::RangeCalculator>();
		} else {
			return std::make_shared<Proxy>(*this, in);
		}
	}
	return std::shared_ptr<Charts::RangeCalculator>();
}


CodegenSupportObjc::StrongAnyPtr TRChartsObjc::RangeCalculatorInterfaceMarshaller::unmarshall(const std::shared_ptr<Charts::RangeCalculator> & in) const
{
	if(in) {
		CodegenSupport::BaseObject * const baseObject = dynamic_cast<CodegenSupport::BaseObject *>(in.get());
		if(baseObject) {
			CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>(baseObject->getHandle());
			return handle->getHostObject();
		} else {
			Proxy * proxy = dynamic_cast<Proxy *>(in.get());
			if(proxy) {
				return proxy->getHostObject();
			} else {
				throw std::logic_error("Cannot unmarshall");
			}
		}
	}
	return nullptr;
}


std::shared_ptr<Charts::RangeCalculator> TRChartsObjc::RangeCalculatorInterfaceMarshaller::marshallBoxed(const id & in) const
{
	return marshall(in);
}


id TRChartsObjc::RangeCalculatorInterfaceMarshaller::unmarshallBoxed(const std::shared_ptr<Charts::RangeCalculator> & in) const
{
	return unmarshall(in);
}

// TODO: temporary hack until we fix static init + threads problems properly

void TRChartsObjc::RangeCalculatorInterfaceMarshaller::init(void) const
{
}



TRChartsObjc::RangeCalculatorInterfaceMarshaller::Proxy::Proxy(const RangeCalculatorInterfaceMarshaller & marshaller, const CodegenSupportObjc::StrongAnyPtr hostObject)
	:marshaller(marshaller), strongHostObject(hostObject)
{
}


TRChartsObjc::RangeCalculatorInterfaceMarshaller::Proxy::~Proxy(void)
{
	// anything to verify here?
}


CodegenSupportObjc::StrongAnyPtr TRChartsObjc::RangeCalculatorInterfaceMarshaller::Proxy::getHostObject(void) const
{
	return strongHostObject;
}


Charts::Range TRChartsObjc::RangeCalculatorInterfaceMarshaller::Proxy::calculateRange(const Charts::Range & dataRange) const
{
	TRChartsObjc::verifyCurrentQueue();
	id<TRRangeCalculator> target = getHostObject();
	return TRChartsObjc::getRangeMarshaller().marshall([target calculateRange:TRChartsObjc::getRangeMarshaller().unmarshall(dataRange)]); 	
}

