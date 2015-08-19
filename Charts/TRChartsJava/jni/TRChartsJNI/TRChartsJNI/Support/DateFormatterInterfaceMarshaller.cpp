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

#ifndef TRChartsJNI_Support_DateFormatterInterfaceMarshaller_cpp
#define TRChartsJNI_Support_DateFormatterInterfaceMarshaller_cpp

#include <TRChartsJNI/Support/DateFormatterInterfaceMarshaller.hpp>
#include <TRChartsJNI/Support/Marshallers.hpp>
#include <TRChartsJNI/Support/Handle.hpp>

#include <cassert>


bool TRChartsJNI::DateFormatterInterfaceMarshaller::inited = false;


jclass TRChartsJNI::DateFormatterInterfaceMarshaller::cls = nullptr;


jmethodID TRChartsJNI::DateFormatterInterfaceMarshaller::midFormatDate = nullptr;


class TRChartsJNI::DateFormatterInterfaceMarshaller::Proxy : public Charts::DateFormatter
{
public:
	Proxy(JNIEnv * env, const DateFormatterInterfaceMarshaller & marshaller, jobject hostObject);

	virtual ~Proxy(void);

	jobject getHostObject(JNIEnv * env) const;

	virtual std::string formatDate(double seconds, Charts::DateUnit unit) const;

private:
	const DateFormatterInterfaceMarshaller & marshaller;
	const jweak weakHostObject;
};



void TRChartsJNI::DateFormatterInterfaceMarshaller::checkInited(JNIEnv * const env)
{
	if(!inited) {
		inited = true;
		cls = (jclass)env->NewGlobalRef(env->FindClass("com/thomsonreuters/corptech/charts/DateFormatter"));
		midFormatDate = env->GetMethodID(cls, "formatDate", "(DLcom/thomsonreuters/corptech/charts/DateUnit;)Ljava/lang/String;");
	}
}


std::shared_ptr<Charts::DateFormatter> TRChartsJNI::DateFormatterInterfaceMarshaller::marshall(JNIEnv * const env, const jobject & in) const
{
	checkInited(env);
	if(in) {
		if(Utils::isBaseObjectInstance(env, in)) {
			Handle * const handle = reinterpret_cast<Handle *>(Utils::getBaseObjectHandle(env, in));
			return handle->getNativeObject<Charts::DateFormatter>(env);
		} else {
			Proxy * const impl = new Proxy(env, *this, in);
			const jobject strongRef = env->NewGlobalRef(in);
			return std::shared_ptr<Charts::DateFormatter>(impl, [=](Charts::DateFormatter * const ptr) -> void {
				delete ptr;
				env->DeleteGlobalRef(strongRef);
			});
		}
	}
	return std::shared_ptr<Charts::DateFormatter>();
}


jobject TRChartsJNI::DateFormatterInterfaceMarshaller::unmarshall(JNIEnv * const env, const std::shared_ptr<Charts::DateFormatter> & in) const
{
	checkInited(env);
	if(in) {
		CodegenSupport::BaseObject * const baseObject = dynamic_cast<CodegenSupport::BaseObject *>(in.get());
		if(baseObject) {
			Handle * const handle = reinterpret_cast<Handle *>(baseObject->getHandle());
			return handle->getHostObject(env);
		} else {
			Proxy * proxy = dynamic_cast<Proxy *>(in.get());
			if(proxy) {
				return proxy->getHostObject(env);
			} else {
				throw new std::logic_error("Cannot unmarshall");
			}
		}
	}
	return nullptr;
}



TRChartsJNI::DateFormatterInterfaceMarshaller::Proxy::Proxy(JNIEnv * const env, const DateFormatterInterfaceMarshaller & marshaller, const jobject hostObject)
	:marshaller(marshaller), weakHostObject(env->NewWeakGlobalRef(hostObject))
{
}


TRChartsJNI::DateFormatterInterfaceMarshaller::Proxy::~Proxy(void)
{
	JNIEnv * const env = Utils::getThreadEnv();
	assert(env);
	env->DeleteWeakGlobalRef(weakHostObject);
}


jobject TRChartsJNI::DateFormatterInterfaceMarshaller::Proxy::getHostObject(JNIEnv * const env) const
{
	return env->NewLocalRef(weakHostObject);
}


std::string TRChartsJNI::DateFormatterInterfaceMarshaller::Proxy::formatDate(double seconds, Charts::DateUnit unit) const
{
	JNIEnv * const env = Utils::getThreadEnv();
	assert(env);
	checkInited(env);
	jvalue args[] = {
		TRChartsJNI::getNumberMarshaller().unmarshallToValue(env, seconds),
		TRChartsJNI::getDateUnitMarshaller().unmarshallToValue(env, unit)
	};
	const jobject hostObject = getHostObject(env);
	const std::string result = TRChartsJNI::getStringMarshaller().callMethod(env, hostObject, midFormatDate, args);
	env->DeleteLocalRef(hostObject);
	return result;
}

#endif