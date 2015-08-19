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

#import <TRChartsObjc/LineStyle.h>
#import <TRChartsObjc/Support/Marshallers.hh>

@implementation TRLineStyle

-(TRLineStyle *)init
{
	self = [super init];
	if(self) {
		self.thickness = 0.0;
		self.mode = TR_LINEMODE_SOLID;
	}
	return self;
}

+(TRLineStyle *)thickness:(double)thickness mode:(TRLineMode)mode
{
	TRLineStyle * const result = [[TRLineStyle alloc] init];
	result.thickness = thickness;
	result.mode = mode;
	return result;
}

-(BOOL)isEqual:(id)anObject
{
	if(anObject == nil || ! [anObject isKindOfClass:[TRLineStyle class]]) {
		return NO;
	}
	TRLineStyle * other = anObject;
	BOOL result = YES;
	result = result && (self.thickness == other.thickness);
	result = result && (self.mode == other.mode);
	return result;
}

-(NSUInteger)hash
{
	NSUInteger result = 7;
    result = 31 * result + (NSUInteger)self.thickness;
    result = 31 * result + (NSUInteger)self.mode;
	return result;
}

-(id)copyWithZone:(NSZone *)zone
{
	TRLineStyle * copy = [[self class] allocWithZone:zone];
	copy.thickness = self.thickness;
	copy.mode = self.mode;
	return copy;
}

-(NSString*)description
{
	return [NSString stringWithFormat:@"TRLineStyle[%f, %zd]", self.thickness, self.mode];
}

@end