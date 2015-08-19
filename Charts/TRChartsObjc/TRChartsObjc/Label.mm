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

#import <TRChartsObjc/Label.h>

#import <TRCharts/Label.hpp>

#import <TRChartsObjc/Support/Marshallers.hh>
#import <TRCodegenSupportObjc/Handle.hh>

@implementation TRLabel

-(TRLabel*)init {
	TRChartsObjc::verifyCurrentQueue();
	self = [super initConcrete];
	Charts::Label * const obj = new Charts::Label();
	CodegenSupportObjc::Handle * const handle = new CodegenSupportObjc::Handle(obj, self);
	obj->setHandle(handle);
	[self setHandle:handle];
	return self;
}

-(NSString *)text {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::Label> obj = handle->getNativeObject<Charts::Label>();
	return TRChartsObjc::getStringMarshaller().unmarshall(obj->getText());
}

-(void)setText:(NSString *)value {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::Label> obj = handle->getNativeObject<Charts::Label>();
	obj->setText(TRChartsObjc::getStringMarshaller().marshall(value));
}

-(TRColor *)color {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::Label> obj = handle->getNativeObject<Charts::Label>();
	return TRChartsObjc::getColorMarshaller().unmarshall(obj->getColor());
}

-(void)setColor:(TRColor *)value {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::Label> obj = handle->getNativeObject<Charts::Label>();
	obj->setColor(TRChartsObjc::getColorMarshaller().marshall(value));
}

-(TRFont *)font {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::Label> obj = handle->getNativeObject<Charts::Label>();
	return TRChartsObjc::getFontMarshaller().unmarshall(obj->getFont());
}

-(void)setFont:(TRFont *)value {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::Label> obj = handle->getNativeObject<Charts::Label>();
	obj->setFont(TRChartsObjc::getFontMarshaller().marshall(value));
}

-(TRMargin *)margin {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::Label> obj = handle->getNativeObject<Charts::Label>();
	return TRChartsObjc::getMarginMarshaller().unmarshall(obj->getMargin());
}

-(void)setMargin:(TRMargin *)value {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::Label> obj = handle->getNativeObject<Charts::Label>();
	obj->setMargin(TRChartsObjc::getMarginMarshaller().marshall(value));
}

-(TRSize *)size {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::Label> obj = handle->getNativeObject<Charts::Label>();
	return TRChartsObjc::getSizeMarshaller().unmarshall(obj->getSize());
}

-(void)setSize:(TRSize *)value {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::Label> obj = handle->getNativeObject<Charts::Label>();
	obj->setSize(TRChartsObjc::getSizeMarshaller().marshall(value));
}

@end