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

#import "LineDecorationGeneratedTests.h"
#import <TRChartsObjc/LineDecoration.h>
#import "TestUtils.hh"

#import <XCTest/XCTestAssertions.h>

@implementation TRLineDecorationGeneratedTests

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
	return [[TRLineDecoration alloc] init];
}

- (void) testInitializeFieldAxis
{
	TRLineDecoration * instance = [self createInstance];
	if(instance) {
		TRContinuousAxis * expected = nil;
		TRContinuousAxis * actual = [instance axis];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldValue
{
	TRLineDecoration * instance = [self createInstance];
	if(instance) {
		double expected = 0.0;
		double actual = [instance value];
		XCTAssertEqual(expected, actual);
	}
}

- (void) testInitializeFieldLineStyle
{
	TRLineDecoration * instance = [self createInstance];
	if(instance) {
		TRLineStyle * expected = [TRLineStyle thickness:1.0 mode:TR_LINEMODE_SOLID];
		TRLineStyle * actual = [instance lineStyle];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldAxis
{
	TRLineDecoration * instance = [self createInstance];
	if(instance) {
		TRContinuousAxis * original = [instance axis];
		TRContinuousAxis * expected = TRChartsObjc::getContinuousAxisTestValue(original);
		[instance setAxis:expected];
		TRContinuousAxis * actual = [instance axis];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldValue
{
	TRLineDecoration * instance = [self createInstance];
	if(instance) {
		double original = [instance value];
		double expected = TRChartsObjc::getNumberTestValue(original);
		[instance setValue:expected];
		double actual = [instance value];
		XCTAssertEqual(expected, actual);
	}
}

- (void) testSetFieldLineStyle
{
	TRLineDecoration * instance = [self createInstance];
	if(instance) {
		TRLineStyle * original = [instance lineStyle];
		TRLineStyle * expected = TRChartsObjc::getLineStyleTestValue(original);
		[instance setLineStyle:expected];
		TRLineStyle * actual = [instance lineStyle];
		XCTAssertEqualObjects(expected, actual);
	}
}


@end
