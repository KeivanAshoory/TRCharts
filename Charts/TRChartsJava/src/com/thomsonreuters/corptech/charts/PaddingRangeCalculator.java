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
 * A range calculator that expands the supplied range in both directions by
 * a padding value (must be specified in data coordinates).
 * </p>
 * <p>
 * <b>WARNING:</b> This is an automatically generated wrapper around a
 * native object; overriding methods will not work as expected.
 * </p>
 */

@SuppressWarnings("all")
public class PaddingRangeCalculator extends BaseObject implements RangeCalculator
{
	/**
	 * Default constructor
	 */

	public PaddingRangeCalculator()
	{
		this(true);
		setHandle(nativeCreate());
	}

	/**
	 * Get the rangeCalculator.
	 * <p>
	 * Optional input range calculator (if specified, this is called first and
	 * the result used as the input to calculateRange)
	 * </p>
	 * @return The current rangeCalculator.
	 */

	public RangeCalculator getRangeCalculator()
	{
		return (RangeCalculator)nativeGetRangeCalculator(getHandle());
	}

	/**
	 * Set the rangeCalculator.
	 * <p>
	 * Optional input range calculator (if specified, this is called first and
	 * the result used as the input to calculateRange)
	 * </p>
	 * @param value The new rangeCalculator.
	 */

	public void setRangeCalculator(final RangeCalculator value)
	{
		nativeSetRangeCalculator(getHandle(), value);
	}

	/**
	 * Get the padding.
	 * <p>
	 * Padding (expressed in data coordinates)
	 * </p>
	 * @return The current padding.
	 */

	public Range getPadding()
	{
		return (Range)nativeGetPadding(getHandle());
	}

	/**
	 * Set the padding.
	 * <p>
	 * Padding (expressed in data coordinates)
	 * </p>
	 * @param value The new padding.
	 */

	public void setPadding(final Range value)
	{
		nativeSetPadding(getHandle(), value);
	}

	/**
	 * <p>
	 * The output data range is [in.min-padding...in.max+padding]
	 * </p>
	 * @param dataRange Input data range
	 * @return The result.
	 */

	public Range calculateRange(final Range dataRange)
	{
		return (Range)nativeCalculateRange(getHandle(), dataRange);
	}

	// need this to prevent default constructor in base classes
	/*package*/ PaddingRangeCalculator(boolean dummy)
	{
		super(dummy);
	}

	protected void onFinalize()
	{
		nativeDestroy(getHandle());
	}

	private final native long nativeCreate();
	private final native void nativeDestroy(long ptr);
	private final native Object nativeGetRangeCalculator(long ptr);
	private final native void nativeSetRangeCalculator(long ptr, Object value);
	private final native Object nativeGetPadding(long ptr);
	private final native void nativeSetPadding(long ptr, Object value);
	private final native Object nativeCalculateRange(long ptr, Object dataRange);
}