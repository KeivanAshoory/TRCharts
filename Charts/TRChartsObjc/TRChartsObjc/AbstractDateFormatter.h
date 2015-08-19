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

#import <TRChartsObjc/DateFormatter.h>
#import <TRChartsObjc/FormatSyntax.h>
#import <TRChartsObjc/DateUnit.h>
#import <TRCodegenSupportObjc/BaseObject.h>

/**
 * Format a date using either the platform formatting mechanism or c-standard
 * library mechanism (dependent on syntax property)
 *
 * @warning This is an automatically generated wrapper around a native object;
 * overriding methods will not work as expected.
 *
 */
@interface TRAbstractDateFormatter : TRBaseObject<TRDateFormatter>

/** @name Fields */

/**
 * Specifies whether the platform data formatting mechanism or c-standard
 * library mechanism should be used.
 *
 * @return The current formatting mode.
 * @see setSyntax:
 */
-(TRFormatSyntax)syntax;

/**
 * Specifies whether the platform data formatting mechanism or c-standard
 * library mechanism should be used.
 *
 * @param value The new formatting mode.
 * @see syntax
 */
-(void)setSyntax:(TRFormatSyntax)value;

/** @name Methods */

/**
 * Format a date
 *
 * @param seconds Date value (in seconds)
 * @param unit Unit hint.
 * @return The result.
 */
-(NSString *)formatDate:(double)seconds unit:(TRDateUnit)unit;

@end