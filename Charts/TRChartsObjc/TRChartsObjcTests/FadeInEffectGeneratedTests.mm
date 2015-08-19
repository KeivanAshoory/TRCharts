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

#import "FadeInEffectGeneratedTests.h"
#import <TRChartsObjc/FadeInEffect.h>
#import "TestUtils.hh"

#import <XCTest/XCTestAssertions.h>

@implementation TRFadeInEffectGeneratedTests

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
	return [[TRFadeInEffect alloc] init];
}

- (void) testInitializeFieldDrawableList
{
	TRFadeInEffect * instance = [self createInstance];
	if(instance) {
		NSArray * expected = @[];
		NSArray * actual = [instance drawableList];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldDrawableList
{
	TRFadeInEffect * instance = [self createInstance];
	if(instance) {
		NSArray * original = [instance drawableList];
		NSArray * expected = TRChartsObjc::getListDrawableTestValue(original);
		[instance setDrawableList:expected];
		NSArray * actual = [instance drawableList];
		XCTAssertEqualObjects(expected, actual);
	}
}


@end
