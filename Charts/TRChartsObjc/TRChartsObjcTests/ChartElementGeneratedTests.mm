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

#import "ChartElementGeneratedTests.h"
#import <TRChartsObjc/ChartElement.h>
#import "TestUtils.hh"

#import <XCTest/XCTestAssertions.h>

@implementation TRChartElementGeneratedTests

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

- (void) testInitializeFieldDrawOrder
{
	TRChartElement * instance = [self createInstance];
	if(instance) {
		long expected = 0L;
		long actual = [instance drawOrder];
		XCTAssertEqual(expected, actual);
	}
}

- (void) testSetFieldDrawOrder
{
	TRChartElement * instance = [self createInstance];
	if(instance) {
		long original = [instance drawOrder];
		long expected = TRChartsObjc::getIntegerTestValue(original);
		[instance setDrawOrder:expected];
		long actual = [instance drawOrder];
		XCTAssertEqual(expected, actual);
	}
}


@end
