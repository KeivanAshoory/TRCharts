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

#import "IncludeZeroRangeCalculatorGeneratedTests.h"
#import <TRChartsObjc/IncludeZeroRangeCalculator.h>
#import "TestUtils.hh"

#import <XCTest/XCTestAssertions.h>

@implementation TRIncludeZeroRangeCalculatorGeneratedTests

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
	return [[TRIncludeZeroRangeCalculator alloc] init];
}

- (void) testInitializeFieldRangeCalculator
{
	TRIncludeZeroRangeCalculator * instance = [self createInstance];
	if(instance) {
		id<TRRangeCalculator> expected = nil;
		id<TRRangeCalculator> actual = [instance rangeCalculator];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldRangeCalculator
{
	TRIncludeZeroRangeCalculator * instance = [self createInstance];
	if(instance) {
		id<TRRangeCalculator> original = [instance rangeCalculator];
		id<TRRangeCalculator> expected = TRChartsObjc::getRangeCalculatorTestValue(original);
		[instance setRangeCalculator:expected];
		id<TRRangeCalculator> actual = [instance rangeCalculator];
		XCTAssertEqualObjects(expected, actual);
	}
}


@end
