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

#import <TRChartsObjc/Drawable.h>
#import <TRChartsObjc/Color.h>
#import <TRChartsObjc/Font.h>
#import <TRChartsObjc/Margin.h>
#import <TRChartsObjc/Size.h>

/**
 * Combines a text value and its visual style.
 *
 * @warning This is an automatically generated wrapper around a native object;
 * overriding methods will not work as expected.
 *
 */
@interface TRLabel : TRDrawable

/** @name Fields */

/**
 * @return The current label text.
 * @see setText:
 */
-(NSString *)text;

/**
 * @param value The new label text.
 * @see text
 */
-(void)setText:(NSString *)value;

/**
 * @return The current label color.
 * @see setColor:
 */
-(TRColor *)color;

/**
 * @param value The new label color.
 * @see color
 */
-(void)setColor:(TRColor *)value;

/**
 * @return The current label font.
 * @see setFont:
 */
-(TRFont *)font;

/**
 * @param value The new label font.
 * @see font
 */
-(void)setFont:(TRFont *)value;

/**
 * Per-edge margin (can be used to offset the label from its draw area)
 *
 * @return The current label margin.
 * @see setMargin:
 */
-(TRMargin *)margin;

/**
 * Per-edge margin (can be used to offset the label from its draw area)
 *
 * @param value The new label margin.
 * @see margin
 */
-(void)setMargin:(TRMargin *)value;

/**
 * Size of the label in points, must be specified explicitly for correct layout
 *
 * @warning It was intended that a facility should be provided to automatically
 * infer this from the font size and text content, but this was never
 * implemented. As such, it is necessary to estimate (or externally calculate)
 * the point size of the label.
 *
 * @return The current label size.
 * @see setSize:
 */
-(TRSize *)size;

/**
 * Size of the label in points, must be specified explicitly for correct layout
 *
 * @warning It was intended that a facility should be provided to automatically
 * infer this from the font size and text content, but this was never
 * implemented. As such, it is necessary to estimate (or externally calculate)
 * the point size of the label.
 *
 * @param value The new label size.
 * @see size
 */
-(void)setSize:(TRSize *)value;

@end