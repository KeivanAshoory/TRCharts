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

#import "ContinuousSeriesGeneratedTests.h"
#import <TRChartsObjc/ContinuousSeries.h>
#import "TestUtils.hh"

#import <XCTest/XCTestAssertions.h>

@implementation TRContinuousSeriesGeneratedTests

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

- (void) testInitializeFieldAbscissaAxis
{
	TRContinuousSeries * instance = [self createInstance];
	if(instance) {
		TRContinuousAxis * expected = nil;
		TRContinuousAxis * actual = [instance abscissaAxis];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldDataSource
{
	TRContinuousSeries * instance = [self createInstance];
	if(instance) {
		id<TRContinuousDataSource> expected = nil;
		id<TRContinuousDataSource> actual = [instance dataSource];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldColorSource
{
	TRContinuousSeries * instance = [self createInstance];
	if(instance) {
		id<TRColorSource> expected = nil;
		id<TRColorSource> actual = [instance colorSource];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldAbscissaAxis
{
	TRContinuousSeries * instance = [self createInstance];
	if(instance) {
		TRContinuousAxis * original = [instance abscissaAxis];
		TRContinuousAxis * expected = TRChartsObjc::getContinuousAxisTestValue(original);
		[instance setAbscissaAxis:expected];
		TRContinuousAxis * actual = [instance abscissaAxis];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldColorSource
{
	TRContinuousSeries * instance = [self createInstance];
	if(instance) {
		id<TRColorSource> original = [instance colorSource];
		id<TRColorSource> expected = TRChartsObjc::getColorSourceTestValue(original);
		[instance setColorSource:expected];
		id<TRColorSource> actual = [instance colorSource];
		XCTAssertEqualObjects(expected, actual);
	}
}


@end
