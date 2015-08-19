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

#import <TRChartsObjc/ContinuousAxis.h>
#import <TRChartsObjc/DateInterval.h>
@protocol TRDateFormatter;
@protocol TRDateTickCalculator;

/**
 * An axis that displays date ticks.
 *
 * @warning This is an automatically generated wrapper around a native object;
 * overriding methods will not work as expected.
 *
 */
@interface TRDateAxis : TRContinuousAxis

/** @name Fields */

/**
 * @return The current offset from UTC.
 * @see setOffsetSeconds:
 */
-(double)offsetSeconds;

/**
 * @param value The new offset from UTC.
 * @see offsetSeconds
 */
-(void)setOffsetSeconds:(double)value;

/**
 * @return The current tick formatter.
 * @see setTickFormatter:
 */
-(id<TRDateFormatter>)tickFormatter;

/**
 * @param value The new tick formatter.
 * @see tickFormatter
 */
-(void)setTickFormatter:(id<TRDateFormatter>)value;

/**
 * @return The current tick calculator.
 * @see setTickCalculator:
 */
-(id<TRDateTickCalculator>)tickCalculator;

/**
 * @param value The new tick calculator.
 * @see tickCalculator
 */
-(void)setTickCalculator:(id<TRDateTickCalculator>)value;

/**
 * @return The current tick interval.
 */
-(TRDateInterval *)tickInterval;

@end