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

package com.thomsonreuters.corptech.charts;

import java.util.List;

/**
 * <p>
 * Provides a means to override the color source for each displayed datum.
 * </p>
 */

@SuppressWarnings("all")
public interface ColorSource
{
	/**
	 * <p>
	 * Override to return the datum colors for the requested range
	 * </p>
	 * @param series Requesting series.
	 * @param range Requested index range.
	 * @param defaultColor Base color
	 * @return The result.
	 */

	List<Color> getColors(Series series, IndexRange range, Color defaultColor);

}
