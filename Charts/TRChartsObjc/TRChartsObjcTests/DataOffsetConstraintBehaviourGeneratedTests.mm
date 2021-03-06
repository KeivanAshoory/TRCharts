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

#import "DataOffsetConstraintBehaviourGeneratedTests.h"
#import <TRChartsObjc/DataOffsetConstraintBehaviour.h>
#import "TestUtils.hh"

#import <XCTest/XCTestAssertions.h>

@implementation TRDataOffsetConstraintBehaviourGeneratedTests

- (void)setUp
{
    [super setUp];
}

- (void)tearDown
{
    [super tearDown];
}

-(id)createInstance
{
	return [[TRDataOffsetConstraintBehaviour alloc] init];
}

- (void) testInitializeFieldAxes
{
	TRDataOffsetConstraintBehaviour * instance = [self createInstance];
	if(instance) {
		NSArray * expected = @[];
		NSArray * actual = [instance axes];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldEdges
{
	TRDataOffsetConstraintBehaviour * instance = [self createInstance];
	if(instance) {
		NSArray * expected = @[TR_EDGE_LEFT, TR_EDGE_RIGHT, TR_EDGE_BOTTOM, TR_EDGE_TOP];
		NSArray * actual = [instance edges];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldMultiplier
{
	TRDataOffsetConstraintBehaviour * instance = [self createInstance];
	if(instance) {
		double expected = 1.0;
		double actual = [instance multiplier];
		XCTAssertEqual(expected, actual);
	}
}

- (void) testSetFieldAxes
{
	TRDataOffsetConstraintBehaviour * instance = [self createInstance];
	if(instance) {
		NSArray * original = [instance axes];
		NSArray * expected = TRChartsObjc::getListAxisTestValue(original);
		[instance setAxes:expected];
		NSArray * actual = [instance axes];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldEdges
{
	TRDataOffsetConstraintBehaviour * instance = [self createInstance];
	if(instance) {
		NSArray * original = [instance edges];
		NSArray * expected = TRChartsObjc::getListEdgeTestValue(original);
		[instance setEdges:expected];
		NSArray * actual = [instance edges];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldMultiplier
{
	TRDataOffsetConstraintBehaviour * instance = [self createInstance];
	if(instance) {
		double original = [instance multiplier];
		double expected = TRChartsObjc::getNumberTestValue(original);
		[instance setMultiplier:expected];
		double actual = [instance multiplier];
		XCTAssertEqual(expected, actual);
	}
}


@end
