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

#import <TRChartsObjc/Constraint.h>
#import <TRChartsObjc/ConstraintBehaviour.h>

#import <TRCharts/Constraint.hpp>
#import <TRCharts/ConstraintBehaviour.hpp>

#import <TRChartsObjc/Support/Marshallers.hh>
#import <TRCodegenSupportObjc/Handle.hh>

@implementation TRConstraint

-(TRConstraint*)init {
	TRChartsObjc::verifyCurrentQueue();
	self = [super initConcrete];
	Charts::Constraint * const obj = new Charts::Constraint();
	CodegenSupportObjc::Handle * const handle = new CodegenSupportObjc::Handle(obj, self);
	obj->setHandle(handle);
	[self setHandle:handle];
	return self;
}

-(id<TRConstraintBehaviour>)behaviour {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::Constraint> obj = handle->getNativeObject<Charts::Constraint>();
	return TRChartsObjc::getConstraintBehaviourMarshaller().unmarshall(obj->getBehaviour());
}

-(void)setBehaviour:(id<TRConstraintBehaviour>)value {
	TRChartsObjc::verifyCurrentQueue();
	CodegenSupportObjc::Handle * const handle = static_cast<CodegenSupportObjc::Handle *>([self handle]);
	std::shared_ptr<Charts::Constraint> obj = handle->getNativeObject<Charts::Constraint>();
	obj->setBehaviour(TRChartsObjc::getConstraintBehaviourMarshaller().marshall(value));
}

@end