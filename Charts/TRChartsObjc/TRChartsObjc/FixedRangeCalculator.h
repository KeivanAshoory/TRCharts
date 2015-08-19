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

#import <TRChartsObjc/RangeCalculator.h>
#import <TRChartsObjc/Range.h>
#import <TRCodegenSupportObjc/BaseObject.h>

/**
 * A range calculator that always returns a fixed range.
 *
 * @warning This is an automatically generated wrapper around a native object;
 * overriding methods will not work as expected.
 *
 */
@interface TRFixedRangeCalculator : TRBaseObject<TRRangeCalculator>

/** @name Fields */

/**
 * @return The current fixed range.
 * @see setRange:
 */
-(TRRange *)range;

/**
 * @param value The new fixed range.
 * @see range
 */
-(void)setRange:(TRRange *)value;

/** @name Methods */

/**
 * The output data range is always the same as the value supplied in the range
 * field
 *
 * @param dataRange Input data range
 * @return The result.
 */
-(TRRange *)calculateRange:(TRRange *)dataRange;

@end