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

#import "SeriesGeneratedTests.h"
#import <TRChartsObjc/Series.h>
#import "TestUtils.hh"

#import <XCTest/XCTestAssertions.h>

@implementation TRSeriesGeneratedTests

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
	// class is abstract, tests will be run only in subclasses
	return nil;
}

- (void) testInitializeFieldOrdinateAxis
{
	TRSeries * instance = [self createInstance];
	if(instance) {
		TRContinuousAxis * expected = nil;
		TRContinuousAxis * actual = [instance ordinateAxis];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldColor
{
	TRSeries * instance = [self createInstance];
	if(instance) {
		TRColor * expected = [TRColor red:0.0 green:0.0 blue:0.0 alpha:0.0];
		TRColor * actual = [instance color];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldOrdinateAxis
{
	TRSeries * instance = [self createInstance];
	if(instance) {
		TRContinuousAxis * original = [instance ordinateAxis];
		TRContinuousAxis * expected = TRChartsObjc::getContinuousAxisTestValue(original);
		[instance setOrdinateAxis:expected];
		TRContinuousAxis * actual = [instance ordinateAxis];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldColor
{
	TRSeries * instance = [self createInstance];
	if(instance) {
		TRColor * original = [instance color];
		TRColor * expected = TRChartsObjc::getColorTestValue(original);
		[instance setColor:expected];
		TRColor * actual = [instance color];
		XCTAssertEqualObjects(expected, actual);
	}
}


@end
