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

#import <TRChartsObjc/AbstractNumberAxis.h>
@protocol TRNumberTickCalculator;

/**
 * An axis that displays uniformly spaced (linear) number ticks.
 *
 * @warning This is an automatically generated wrapper around a native object;
 * overriding methods will not work as expected.
 *
 */
@interface TRNumberAxis : TRAbstractNumberAxis

/** @name Fields */

/**
 * @return The current tick calculator.
 * @see setTickCalculator:
 */
-(id<TRNumberTickCalculator>)tickCalculator;

/**
 * @param value The new tick calculator.
 * @see tickCalculator
 */
-(void)setTickCalculator:(id<TRNumberTickCalculator>)value;

/**
 * @return The current tick interval.
 */
-(double)tickInterval;

@end