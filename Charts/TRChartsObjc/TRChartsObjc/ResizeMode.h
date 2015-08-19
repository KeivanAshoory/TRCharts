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

#include <Foundation/Foundation.h>

/**
 * Controls what happens when the chart area is resized.
 *
 */

typedef NS_ENUM(NSInteger, TRResizeMode)
{
	/**
	 * Increase the scale, so that the same data is displayed.
	 */
	TR_RESIZEMODE_RESCALE,

	/**
	 * Layout the data again.
	 */
	TR_RESIZEMODE_RELAYOUT,

	/**
	 * Do not affect the scale or layout.
	 */
	TR_RESIZEMODE_PRESERVE

};

typedef enum TRResizeMode TRResizeMode;

/**
 * Get the size (element count) of the TRResizeMode enum.
 *
 * @return The number of elements.
 */

static inline NSInteger TRResizeMode_size(void)
{
	return 3;
}

/**
 * Get the name of a given member of the TRResizeMode enum.
 *
 * @param value The enum value.
 * @return The name (as per source code), or "?" if an invalid value is provided.
 */

static inline NSString * TRResizeMode_name(TRResizeMode value)
{
	switch(value) {
	case TR_RESIZEMODE_RESCALE:
		return @"TR_RESIZEMODE_RESCALE";
	case TR_RESIZEMODE_RELAYOUT:
		return @"TR_RESIZEMODE_RELAYOUT";
	case TR_RESIZEMODE_PRESERVE:
		return @"TR_RESIZEMODE_PRESERVE";
	default:
		return @"?";
	}
}
