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

#import <TRChartsObjc/AbstractDateFormatter.h>

#import <TRCharts/AbstractDateFormatter.hpp>

#import <TRChartsObjc/Support/Marshallers.hh>
#import <TRCodegenSupportObjc/Handle.hh>

@implementation TRAbstractDateFormatter

-(TRAbstractDateFormatter*)init {
	TRChartsObjc::verifyCurrentQueue();
	@throw [NSException exceptionWithName:@"Init" reason:@"Cannot construct TRAbstractDateFormatter directly" userInfo:nil];
}

-(TRFormatSyntax)syntax {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::AbstractDateFormatter> obj = handle->getNativeObject<Charts::AbstractDateFormatter>();
	return TRChartsObjc::getFormatSyntaxMarshaller().unmarshall(obj->getSyntax());
}

-(void)setSyntax:(TRFormatSyntax)value {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::AbstractDateFormatter> obj = handle->getNativeObject<Charts::AbstractDateFormatter>();
	obj->setSyntax(TRChartsObjc::getFormatSyntaxMarshaller().marshall(value));
}

-(NSString *)formatDate:(double)seconds unit:(TRDateUnit)unit {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::AbstractDateFormatter> obj = handle->getNativeObject<Charts::AbstractDateFormatter>();
	return TRChartsObjc::getStringMarshaller().unmarshall(obj->formatDate(TRChartsObjc::getNumberMarshaller().marshall(seconds), TRChartsObjc::getDateUnitMarshaller().marshall(unit)));	
}

@end