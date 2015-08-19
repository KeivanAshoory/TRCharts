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

#import "SuffixNumberFormatterGeneratedTests.h"
#import <TRChartsObjc/SuffixNumberFormatter.h>
#import "TestUtils.hh"

#import <XCTest/XCTestAssertions.h>

@implementation TRSuffixNumberFormatterGeneratedTests

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
	return [[TRSuffixNumberFormatter alloc] init];
}

- (void) testInitializeFieldBase
{
	TRSuffixNumberFormatter * instance = [self createInstance];
	if(instance) {
		long expected = 1000L;
		long actual = [instance base];
		XCTAssertEqual(expected, actual);
	}
}

- (void) testInitializeFieldSuffixes
{
	TRSuffixNumberFormatter * instance = [self createInstance];
	if(instance) {
		NSArray * expected = @[@"", @"K", @"M", @"G", @"T", @"P", @"E", @"Z", @"Y"];
		NSArray * actual = [instance suffixes];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldBase
{
	TRSuffixNumberFormatter * instance = [self createInstance];
	if(instance) {
		long original = [instance base];
		long expected = TRChartsObjc::getIntegerTestValue(original);
		[instance setBase:expected];
		long actual = [instance base];
		XCTAssertEqual(expected, actual);
	}
}

- (void) testSetFieldSuffixes
{
	TRSuffixNumberFormatter * instance = [self createInstance];
	if(instance) {
		NSArray * original = [instance suffixes];
		NSArray * expected = TRChartsObjc::getListStringTestValue(original);
		[instance setSuffixes:expected];
		NSArray * actual = [instance suffixes];
		XCTAssertEqualObjects(expected, actual);
	}
}


@end
