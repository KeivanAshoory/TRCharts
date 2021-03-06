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

#import <TRChartsObjc/IndexRange.h>
@class TRContinuousSeries;

/**
 */
@protocol TRContinuousDataSource

/**
 * Return the currently available range of datums
 *
 * @param series The series instance currently using the datasource (the data source may be shared between series)
 * @return The result.
 */
-(TRIndexRange *)getDatumRange:(TRContinuousSeries *)series;

/**
 * Get a range of datums
 *
 * Returning more/less datums than requested is explicitly supported, provided
 * the returned range starts from the correct index.
 *
 * @param series The series instance currently using the datasource (the data source may be shared between series)
 * @param range Requested index range.
 * @return The result.
 */
-(NSArray *)getDatums:(TRContinuousSeries *)series range:(TRIndexRange *)range;

@end