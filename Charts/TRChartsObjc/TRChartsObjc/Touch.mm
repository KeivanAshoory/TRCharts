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

#import <TRChartsObjc/Touch.h>
#import <TRChartsObjc/Support/Marshallers.hh>

@implementation TRTouch

-(TRTouch *)init
{
	self = [super init];
	if(self) {
		self.position = [TRPoint x:0.0 y:0.0];
		self.lastPosition = [TRPoint x:0.0 y:0.0];
	}
	return self;
}

+(TRTouch *)position:(TRPoint *)position lastPosition:(TRPoint *)lastPosition
{
	TRTouch * const result = [[TRTouch alloc] init];
	result.position = position;
	result.lastPosition = lastPosition;
	return result;
}

-(BOOL)isEqual:(id)anObject
{
	if(anObject == nil || ! [anObject isKindOfClass:[TRTouch class]]) {
		return NO;
	}
	TRTouch * other = anObject;
	BOOL result = YES;
	if(self.position == nil) {
		result = result && (other.position == nil);
	} else {
		result = result && [self.position isEqual:other.position];
	}
	if(self.lastPosition == nil) {
		result = result && (other.lastPosition == nil);
	} else {
		result = result && [self.lastPosition isEqual:other.lastPosition];
	}
	return result;
}

-(NSUInteger)hash
{
	NSUInteger result = 7;
    result = 31 * result + [self.position hash];
    result = 31 * result + [self.lastPosition hash];
	return result;
}

-(id)copyWithZone:(NSZone *)zone
{
	TRTouch * copy = [[self class] allocWithZone:zone];
	copy.position = [self.position copyWithZone:zone];
	copy.lastPosition = [self.lastPosition copyWithZone:zone];
	return copy;
}

-(NSString*)description
{
	return [NSString stringWithFormat:@"TRTouch[%@, %@]", self.position, self.lastPosition];
}

@end