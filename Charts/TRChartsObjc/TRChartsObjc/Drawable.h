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

#import <TRChartsObjc/Attachable.h>

/**
 * Base class for all objects that can be drawn
 *
 * @warning This is an automatically generated wrapper around a native object;
 * overriding methods will not work as expected.
 *
 */
@interface TRDrawable : TRAttachable

/** @name Fields */

/**
 * If false, the object will not be drawn (but it may have a visual or
 * interactive effect on surrounding objects)
 *
 * @return The current visibility flag.
 * @see setVisible:
 */
-(BOOL)visible;

/**
 * If false, the object will not be drawn (but it may have a visual or
 * interactive effect on surrounding objects)
 *
 * @param value The new visibility flag.
 * @see visible
 */
-(void)setVisible:(BOOL)value;

/**
 * Overall opacity of this object. This is mixed (multiplied) with the alpha of
 * any relevant colour value within the drawable object.
 *
 * @return The current opacity (0-255).
 * @see setOpacity:
 */
-(double)opacity;

/**
 * Overall opacity of this object. This is mixed (multiplied) with the alpha of
 * any relevant colour value within the drawable object.
 *
 * @param value The new opacity (0-255).
 * @see opacity
 */
-(void)setOpacity:(double)value;

@end