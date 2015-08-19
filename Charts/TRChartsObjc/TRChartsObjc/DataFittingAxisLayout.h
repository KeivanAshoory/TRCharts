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

#import <TRChartsObjc/AxisLayout.h>
#import <TRChartsObjc/DataTransform.h>
#import <TRChartsObjc/Range.h>
#import <TRCodegenSupportObjc/BaseObject.h>
@protocol TRRangeCalculator;
@class TRContinuousAxis;

/**
 * An axis layout that tries to fit all available data into the visible area.
 *
 * @warning This is an automatically generated wrapper around a native object;
 * overriding methods will not work as expected.
 *
 */
@interface TRDataFittingAxisLayout : TRBaseObject<TRAxisLayout>

/** @name Fields */

/**
 * Assigning a range calculator is optional, if not supplied, the data range
 * supplied by the axis will be used.
 *
 * @return The current rangeCalculator.
 * @see setRangeCalculator:
 */
-(id<TRRangeCalculator>)rangeCalculator;

/**
 * Assigning a range calculator is optional, if not supplied, the data range
 * supplied by the axis will be used.
 *
 * @param value The new rangeCalculator.
 * @see rangeCalculator
 */
-(void)setRangeCalculator:(id<TRRangeCalculator>)value;

/** @name Methods */

/**
 * Calculate layout transform for the axis
 *
 * @param axis Axis requiring layout
 * @param dataRange Data range for all series associated with the axis
 * @param screenLength Length of the axis, in screen co-ordinates
 * @param renderTransform Current offset transform (i.e. transform caused by panning and zooming).
 * @return The result.
 */
-(TRDataTransform *)calculateTransform:(TRContinuousAxis *)axis dataRange:(TRRange *)dataRange screenLength:(double)screenLength renderTransform:(TRDataTransform *)renderTransform;

@end