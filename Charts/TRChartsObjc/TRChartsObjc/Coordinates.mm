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

#import <TRChartsObjc/Coordinates.h>
#import <TRChartsObjc/Support/Marshallers.hh>

@implementation TRCoordinates

-(TRCoordinates *)init
{
	self = [super init];
	if(self) {
		self.abscissa = 0.0;
		self.ordinate = 0.0;
	}
	return self;
}

+(TRCoordinates *)abscissa:(double)abscissa ordinate:(double)ordinate
{
	TRCoordinates * const result = [[TRCoordinates alloc] init];
	result.abscissa = abscissa;
	result.ordinate = ordinate;
	return result;
}

-(BOOL)isEqual:(id)anObject
{
	if(anObject == nil || ! [anObject isKindOfClass:[TRCoordinates class]]) {
		return NO;
	}
	TRCoordinates * other = anObject;
	BOOL result = YES;
	result = result && (self.abscissa == other.abscissa);
	result = result && (self.ordinate == other.ordinate);
	return result;
}

-(NSUInteger)hash
{
	NSUInteger result = 7;
    result = 31 * result + (NSUInteger)self.abscissa;
    result = 31 * result + (NSUInteger)self.ordinate;
	return result;
}

-(id)copyWithZone:(NSZone *)zone
{
	TRCoordinates * copy = [[self class] allocWithZone:zone];
	copy.abscissa = self.abscissa;
	copy.ordinate = self.ordinate;
	return copy;
}

-(NSString*)description
{
	return [NSString stringWithFormat:@"TRCoordinates[%f, %f]", self.abscissa, self.ordinate];
}

@end