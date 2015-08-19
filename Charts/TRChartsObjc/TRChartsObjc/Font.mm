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

#import <TRChartsObjc/Font.h>
#import <TRChartsObjc/Support/Marshallers.hh>

@implementation TRFont

-(TRFont *)init
{
	self = [super init];
	if(self) {
		self.name = @"";
		self.size = 0L;
		self.hint = TR_FONTHINT_ACCURATE;
	}
	return self;
}

+(TRFont *)name:(NSString *)name size:(long)size hint:(TRFontHint)hint
{
	TRFont * const result = [[TRFont alloc] init];
	result.name = name;
	result.size = size;
	result.hint = hint;
	return result;
}

-(BOOL)isEqual:(id)anObject
{
	if(anObject == nil || ! [anObject isKindOfClass:[TRFont class]]) {
		return NO;
	}
	TRFont * other = anObject;
	BOOL result = YES;
	if(self.name == nil) {
		result = result && (other.name == nil);
	} else {
		result = result && [self.name isEqual:other.name];
	}
	result = result && (self.size == other.size);
	result = result && (self.hint == other.hint);
	return result;
}

-(NSUInteger)hash
{
	NSUInteger result = 7;
    result = 31 * result + [self.name hash];
    result = 31 * result + (NSUInteger)self.size;
    result = 31 * result + (NSUInteger)self.hint;
	return result;
}

-(id)copyWithZone:(NSZone *)zone
{
	TRFont * copy = [[self class] allocWithZone:zone];
	copy.name = [self.name copyWithZone:zone];
	copy.size = self.size;
	copy.hint = self.hint;
	return copy;
}

-(NSString*)description
{
	return [NSString stringWithFormat:@"TRFont[%@, %ld, %zd]", self.name, self.size, self.hint];
}

@end