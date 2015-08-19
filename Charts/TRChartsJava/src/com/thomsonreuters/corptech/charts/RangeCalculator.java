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
 * A range calculator is used to define the default range of a data series.
 * It is axis-specific.
 * </p>
 * <p>
 * The calculateRange method takes a parameter, initially this is the actual
 * min..max data range of all series associated with the axis, the method
 * should return a new data range. All built-in implementations of
 * RangeCalculator (except FixedRangeCalculator) have a rangeCalculator
 * parameter, which can be used to allow chaining, that is the supplied
 * range calculator is called and then the calculateRange method called with
 * that result.
 * </p>
 */

@SuppressWarnings("all")
public interface RangeCalculator
{
	/**
	 * <p>
	 * Calculate the output data range
	 * </p>
	 * @param dataRange Input data range
	 * @return The result.
	 */

	Range calculateRange(Range dataRange);

}