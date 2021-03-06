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

#import <TRChartsObjc/DateTickCalculator.h>
#import <TRChartsObjc/DateInterval.h>
#import <TRChartsObjc/Range.h>
#import <TRCodegenSupportObjc/BaseObject.h>

/**
 * @warning This is an automatically generated wrapper around a native object;
 * overriding methods will not work as expected.
 *
 */
@interface TRAutomaticDateTickCalculator : TRBaseObject<TRDateTickCalculator>

/** @name Fields */

/**
 * @return The current targetScreenInterval.
 * @see setTargetScreenInterval:
 */
-(double)targetScreenInterval;

/**
 * @param value The new targetScreenInterval.
 * @see targetScreenInterval
 */
-(void)setTargetScreenInterval:(double)value;

/**
 * @return The current minInterval.
 * @see setMinInterval:
 */
-(TRDateInterval *)minInterval;

/**
 * @param value The new minInterval.
 * @see minInterval
 */
-(void)setMinInterval:(TRDateInterval *)value;

/** @name Methods */

/**
 * Returns the calculated date tick interval
 *
 * @param dataRange Total data range for the axis
 * @param visibleDataRange Data range that is visible under the current data transform
 * @param screenLength Visual length of the axis on the screen (in points)
 * @return The result.
 */
-(TRDateInterval *)calculateTickInterval:(TRRange *)dataRange visibleDataRange:(TRRange *)visibleDataRange screenLength:(double)screenLength;

@end