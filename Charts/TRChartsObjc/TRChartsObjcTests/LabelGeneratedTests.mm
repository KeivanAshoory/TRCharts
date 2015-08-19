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

#import "LabelGeneratedTests.h"
#import <TRChartsObjc/Label.h>
#import "TestUtils.hh"

#import <XCTest/XCTestAssertions.h>

@implementation TRLabelGeneratedTests

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
	return [[TRLabel alloc] init];
}

- (void) testInitializeFieldText
{
	TRLabel * instance = [self createInstance];
	if(instance) {
		NSString * expected = @"";
		NSString * actual = [instance text];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldColor
{
	TRLabel * instance = [self createInstance];
	if(instance) {
		TRColor * expected = [TRColor red:0.0 green:0.0 blue:0.0 alpha:0.0];
		TRColor * actual = [instance color];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldFont
{
	TRLabel * instance = [self createInstance];
	if(instance) {
		TRFont * expected = [TRFont name:@"" size:0L hint:TR_FONTHINT_ACCURATE];
		TRFont * actual = [instance font];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldMargin
{
	TRLabel * instance = [self createInstance];
	if(instance) {
		TRMargin * expected = [TRMargin left:0.0 right:0.0 bottom:0.0 top:0.0];
		TRMargin * actual = [instance margin];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testInitializeFieldSize
{
	TRLabel * instance = [self createInstance];
	if(instance) {
		TRSize * expected = [TRSize width:0.0 height:0.0];
		TRSize * actual = [instance size];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldText
{
	TRLabel * instance = [self createInstance];
	if(instance) {
		NSString * original = [instance text];
		NSString * expected = TRChartsObjc::getStringTestValue(original);
		[instance setText:expected];
		NSString * actual = [instance text];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldColor
{
	TRLabel * instance = [self createInstance];
	if(instance) {
		TRColor * original = [instance color];
		TRColor * expected = TRChartsObjc::getColorTestValue(original);
		[instance setColor:expected];
		TRColor * actual = [instance color];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldFont
{
	TRLabel * instance = [self createInstance];
	if(instance) {
		TRFont * original = [instance font];
		TRFont * expected = TRChartsObjc::getFontTestValue(original);
		[instance setFont:expected];
		TRFont * actual = [instance font];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldMargin
{
	TRLabel * instance = [self createInstance];
	if(instance) {
		TRMargin * original = [instance margin];
		TRMargin * expected = TRChartsObjc::getMarginTestValue(original);
		[instance setMargin:expected];
		TRMargin * actual = [instance margin];
		XCTAssertEqualObjects(expected, actual);
	}
}

- (void) testSetFieldSize
{
	TRLabel * instance = [self createInstance];
	if(instance) {
		TRSize * original = [instance size];
		TRSize * expected = TRChartsObjc::getSizeTestValue(original);
		[instance setSize:expected];
		TRSize * actual = [instance size];
		XCTAssertEqualObjects(expected, actual);
	}
}


@end
