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

#import <TRChartsObjc/IndexRange.h>

/**
 * Represents an integer start and end index (start:inclusive, end:exclusive)
 *
 * A valid index range must be ordered such that min is less than or equal to
 * max. Most methods (except valid and positive) expect that the supplied index
 * range is valid and will likely return unexpected results if this is not the
 * case.
 *
 * @note This is a value class, when passing it to other library methods it is
 * always effectively copied.
 *
 */
@interface TRIndexRange : NSObject <NSCopying>

/** @name Fields */
/**
 * The start of range.
 *
 * The start of range is inclusive
 */
@property long begin;

/**
 * The end of range.
 *
 * The end of range is exclusive
 */
@property long end;

/** @name Methods */
/**
 * Default init.
 *
 * @return Initialized object.
 */
-(TRIndexRange *)init;

/**
 * Create a IndexRange instance with provided values.
 *
 * @param begin The start of range.
 * @param end The end of range.
 */
+(TRIndexRange *)begin:(long)begin end:(long)end;

/**
 * Length of the range (in.end - in.begin)
 *
 * @param indexRange Input range (in)
 * @return The result.
 */
+(long)length:(TRIndexRange *)indexRange;

/**
 * If true, the parameter index range is ordered such that in.begin <= in.end
 * (i.e. the length may be 0)
 *
 * @param indexRange Input range (in)
 * @return The result.
 */
+(BOOL)valid:(TRIndexRange *)indexRange;

/**
 * If true, the parameter index range is valid, and it does not exceed the
 * extents of the withinRange parameter (in.begin >= within.begin && in.end <=
 * within.end)
 *
 * @param indexRange Input range (in)
 * @param otherIndexRange Within range (within)
 * @return The result.
 */
+(BOOL)validWithin:(TRIndexRange *)indexRange otherIndexRange:(TRIndexRange *)otherIndexRange;

/**
 * If true, the parameter index range is ordered such that in.begin < in.end
 *
 * @param indexRange Input range (in)
 * @return The result.
 */
+(BOOL)positive:(TRIndexRange *)indexRange;

/**
 * Returns the smallest range enclosing both supplied ranges min(a.begin,
 * b.begin), max(a.end, b.end)
 *
 * @param indexRange Input range (a)
 * @param otherIndexRange Input range (b)
 * @return The result.
 */
+(TRIndexRange *)merge:(TRIndexRange *)indexRange otherIndexRange:(TRIndexRange *)otherIndexRange;

/**
 * Constrain the parameter index range such that it does not exceed the extents
 * of the withinRange parameter (in.begin >= within.begin && in.end <=
 * within.end)
 *
 * @param indexRange Input range (in)
 * @param withinIndexRange Within range (within)
 * @return The result.
 */
+(TRIndexRange *)clamp:(TRIndexRange *)indexRange withinIndexRange:(TRIndexRange *)withinIndexRange;

/**
 * Returns true if the ranges intersect (but not if they just touch) i.e returns
 * true iff max(a.begin, b.begin) <= min(a.end, b.end)
 *
 * @param indexRange Input range (a)
 * @param otherIndexRange Input range (b)
 * @return The result.
 */
+(BOOL)overlap:(TRIndexRange *)indexRange otherIndexRange:(TRIndexRange *)otherIndexRange;

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