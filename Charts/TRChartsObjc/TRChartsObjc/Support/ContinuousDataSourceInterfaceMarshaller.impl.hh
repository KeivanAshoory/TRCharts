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

#include <TRChartsObjc/Support/ContinuousDataSourceInterfaceMarshaller.hh>
#include <TRChartsObjc/Support/Marshallers.hh>
#include <TRCodegenSupportObjc/Handle.hh>
#include <TRCodegenSupportObjc/BaseObject.h>

template <typename T>
class TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::Proxy : public Charts::ContinuousDataSource<T>
{
public:
	Proxy(const ContinuousDataSourceInterfaceMarshaller<T> & marshaller, CodegenSupportObjc::StrongAnyPtr hostObject);

	virtual ~Proxy(void);

	CodegenSupportObjc::StrongAnyPtr getHostObject(void) const;

	const CodegenSupportObjc::Marshaller<std::shared_ptr<Charts::ContinuousSeries<T>>, id> & getContinuousSeries_TMarshaller(void) const;

	const CodegenSupportObjc::Marshaller<T, id> & getTMarshaller(void) const;

	const CodegenSupportObjc::Marshaller<std::vector<T>, NSArray *> & getListTMarshaller(void) const;

	virtual Charts::IndexRange getDatumRange(const std::shared_ptr<Charts::ContinuousSeries<T>> & series) const;

	virtual std::vector<T> getDatums(const std::shared_ptr<Charts::ContinuousSeries<T>> & series, const Charts::IndexRange & range) const;

private:
	const ContinuousDataSourceInterfaceMarshaller<T> & marshaller;
	mutable id __strong strongHostObject;
};

template <typename T>
TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::ContinuousDataSourceInterfaceMarshaller(const CodegenSupportObjc::Marshaller<T, id> & marshallerT)
:marshallerT(marshallerT)
{
}

template <typename T>
std::shared_ptr<Charts::ContinuousDataSource<T>> TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::marshall(const CodegenSupportObjc::StrongAnyPtr & in) const
{
	if(in) {
		if([in isKindOfClass:[TRBaseObject class]]) {
			CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([in handle]);
			return handle->getNativeObject<Charts::ContinuousDataSource<T>>();
		} else {
			return std::make_shared<Proxy>(*this, in);
		}
	}
	return std::shared_ptr<Charts::ContinuousDataSource<T>>();
}

template <typename T>
CodegenSupportObjc::StrongAnyPtr TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::unmarshall(const std::shared_ptr<Charts::ContinuousDataSource<T>> & in) const
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

template <typename T>
std::shared_ptr<Charts::ContinuousDataSource<T>> TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::marshallBoxed(const id & in) const
{
	return marshall(in);
}

template <typename T>
id TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::unmarshallBoxed(const std::shared_ptr<Charts::ContinuousDataSource<T>> & in) const
{
	return unmarshall(in);
}

// TODO: temporary hack until we fix static init + threads problems properly
template <typename T>
void TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::init(void) const
{
	getContinuousSeries_TMarshaller();
	getTMarshaller();
	getListTMarshaller();
}

template <typename T>
const CodegenSupportObjc::Marshaller<std::shared_ptr<Charts::ContinuousSeries<T>>, id> & TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::getContinuousSeries_TMarshaller(void) const
{
	if(!cachedContinuousSeries_TMarshaller) {
		cachedContinuousSeries_TMarshaller.reset(new CodegenSupportObjc::ObjectMarshaller<Charts::ContinuousSeries<T>>());
	}
	return *cachedContinuousSeries_TMarshaller;
}

template <typename T>
const CodegenSupportObjc::Marshaller<T, id> & TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::getTMarshaller(void) const
{
	return marshallerT;
}

template <typename T>
const CodegenSupportObjc::Marshaller<std::vector<T>, NSArray *> & TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::getListTMarshaller(void) const
{
	if(!cachedListTMarshaller) {
		cachedListTMarshaller.reset(new CodegenSupportObjc::ListMarshaller<T, id>(getTMarshaller()));
	}
	return *cachedListTMarshaller;
}


template <typename T>
TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::Proxy::Proxy(const ContinuousDataSourceInterfaceMarshaller<T> & marshaller, const CodegenSupportObjc::StrongAnyPtr hostObject)
	:marshaller(marshaller), strongHostObject(hostObject)
{
}

template <typename T>
TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::Proxy::~Proxy(void)
{
	// anything to verify here?
}

template <typename T>
CodegenSupportObjc::StrongAnyPtr TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::Proxy::getHostObject(void) const
{
	return strongHostObject;
}

template <typename T>
const CodegenSupportObjc::Marshaller<std::shared_ptr<Charts::ContinuousSeries<T>>, id> & TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::Proxy::getContinuousSeries_TMarshaller(void) const
{
	return marshaller.getContinuousSeries_TMarshaller();
}

template <typename T>
const CodegenSupportObjc::Marshaller<T, id> & TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::Proxy::getTMarshaller(void) const
{
	return marshaller.getTMarshaller();
}

template <typename T>
const CodegenSupportObjc::Marshaller<std::vector<T>, NSArray *> & TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::Proxy::getListTMarshaller(void) const
{
	return marshaller.getListTMarshaller();
}

template <typename T>
Charts::IndexRange TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::Proxy::getDatumRange(const std::shared_ptr<Charts::ContinuousSeries<T>> & series) const
{
	TRChartsObjc::verifyCurrentQueue();
	id<TRContinuousDataSource> target = getHostObject();
	return TRChartsObjc::getIndexRangeMarshaller().marshall([target getDatumRange:getContinuousSeries_TMarshaller().unmarshall(series)]); 	
}

template <typename T>
std::vector<T> TRChartsObjc::ContinuousDataSourceInterfaceMarshaller<T>::Proxy::getDatums(const std::shared_ptr<Charts::ContinuousSeries<T>> & series, const Charts::IndexRange & range) const
{
	TRChartsObjc::verifyCurrentQueue();
	id<TRContinuousDataSource> target = getHostObject();
	return getListTMarshaller().marshall([target getDatums:getContinuousSeries_TMarshaller().unmarshall(series) range:TRChartsObjc::getIndexRangeMarshaller().unmarshall(range)]); 	
}

