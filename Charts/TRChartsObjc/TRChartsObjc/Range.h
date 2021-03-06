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

#include <Foundation/Foundation.h>

#import <TRChartsObjc/Range.h>

/**
 * An inclusive range in the real number domain.
 *
 * @note This is a value class, when passing it to other library methods it is
 * always effectively copied.
 *
 */
@interface TRRange : NSObject <NSCopying>

/** @name Fields */
/**
 * The min value.
 */
@property double min;

/**
 * The max value.
 */
@property double max;

/** @name Methods */
/**
 * Default init.
 *
 * @return Initialized object.
 */
-(TRRange *)init;

/**
 * Create a Range instance with provided values.
 *
 * @param min The min value.
 * @param max The max value.
 */
+(TRRange *)min:(double)min max:(double)max;

/**
 * Return the length of the range (max - min)
 *
 * @param range Input range
 * @return The result.
 */
+(double)length:(TRRange *)range;

/**
 * Returns true if the min value is less than or equal to max value
 *
 * @param range Input range
 * @return The result.
 */
+(BOOL)valid:(TRRange *)range;

/**
 * Returns true if the min value is less than max value
 *
 * @param range Input range
 * @return The result.
 */
+(BOOL)positive:(TRRange *)range;

/**
 * Returns the enclosing range of the arguments
 *
 * Both ranges must be valid, else behaviour is not defined.
 *
 * @param range Input range
 * @param otherRange Input range
 * @return The result.
 */
+(TRRange *)merge:(TRRange *)range otherRange:(TRRange *)otherRange;

/**
 * Clamps the input range so that it's min and max values fall within the clamp
 * range.
 *
 * Both ranges must be valid, else behaviour is not defined.
 *
 * @param range Input range
 * @param withinRange Clamp range
 * @return The result.
 */
+(TRRange *)clamp:(TRRange *)range withinRange:(TRRange *)withinRange;

/**
 * Returns true if the ranges overlap (intersect)
 *
 * Both ranges must be valid, else behaviour is not defined.
 *
 * @param range Input range
 * @param otherRange Input range
 * @return The result.
 */
+(BOOL)overlap:(TRRange *)range otherRange:(TRRange *)otherRange;

/**
 * Returns the range [0,0]
 *
 * @return The result.
 */
+(TRRange *)identity;

/**
 * Test for equality (uses all struct fields)
 *
 * @param anObject Object to compare to.
 * @return True if the objects are equal.
 */
-(BOOL)isEqual:(id)anObject;

/**
 * Calculate the hash code (uses all struct fields)
 *
 * @return The hash code.
 */
-(NSUInteger)hash;

/**
 * Create a copy (uses all struct fields)
 *
 * @param zone Memory zone.
 * @return A copy.
 */
-(id)copyWithZone:(NSZone *)zone;

/**
 * Create a string description (uses all struct fields)
 *
 * @return The description.
 */
-(NSString*)description;

@end