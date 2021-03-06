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

#import <TRChartsObjc/Size.h>

/**
 * Base interface/protocol for objects with a visual representation
 *
 */
@protocol TRRenderable

/**
 * Set the render area size (nothing will be drawn outside this area).
 *
 * In iOS, a content scale factor is used to help with specifying
 * Retina/non-Retina sizes. The content scale factor should be supplied to the
 * chart (the size value itself should not be pre-multiplied by the scale
 * factor). On non-iOS platforms the default value of 1.0 can be used.
 *
 * @param size Size of the area in points
 * @param contentScaleFactor Content scale factor (iOS specific)
 */
-(void)resize:(TRSize *)size contentScaleFactor:(double)contentScaleFactor;

/**
 * Load new data
 *
 * Calling this method is optional
 *
 */
-(void)preUpdate;

/**
 * Synchronize changed properties with internal state
 *
 * A valid size must be set before calling this method
 *
 * @return The result.
 */
-(BOOL)update;

/**
 * Prepare OpenGL context for rendering
 *
 * Must be called from a thread which has the correct OpenGL context.
 *
 * Calling this method is optional
 *
 */
-(void)preRender;

/**
 * Must be called from a thread which has the correct OpenGL context.
 *
 */
-(void)render;

/**
 * Must be called from a thread which has the correct OpenGL context.
 *
 */
-(void)dispose;

@end