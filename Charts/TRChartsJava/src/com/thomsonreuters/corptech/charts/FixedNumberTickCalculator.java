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
 * Number tick calculator implementation that returns a constant
 * pre-specified tick interval
 * </p>
 * <p>
 * <b>WARNING:</b> This is an automatically generated wrapper around a
 * native object; overriding methods will not work as expected.
 * </p>
 */

@SuppressWarnings("all")
public class FixedNumberTickCalculator extends BaseObject implements NumberTickCalculator
{
	/**
	 * Default constructor
	 */

	public FixedNumberTickCalculator()
	{
		this(true);
		setHandle(nativeCreate());
	}

	/**
	 * Get the tick interval.
	 * <p>
	 * This value is always returned by calculateTickInterval
	 * </p>
	 * @return The current tick interval.
	 */

	public double getTickInterval()
	{
		return nativeGetTickInterval(getHandle());
	}

	/**
	 * Set the tick interval.
	 * <p>
	 * This value is always returned by calculateTickInterval
	 * </p>
	 * @param value The new tick interval.
	 */

	public void setTickInterval(final double value)
	{
		nativeSetTickInterval(getHandle(), value);
	}

	/**
	 * <p>
	 * Returns the value of tickInterval
	 * </p>
	 * @param dataRange Ignored
	 * @param visibleDataRange Ignored
	 * @param screenLength Ignored
	 * @return The result.
	 */

	public double calculateTickInterval(final Range dataRange, final Range visibleDataRange, final double screenLength)
	{
		return nativeCalculateTickInterval(getHandle(), dataRange, visibleDataRange, screenLength);
	}

	// need this to prevent default constructor in base classes
	/*package*/ FixedNumberTickCalculator(boolean dummy)
	{
		super(dummy);
	}

	protected void onFinalize()
	{
		nativeDestroy(getHandle());
	}

	private final native long nativeCreate();
	private final native void nativeDestroy(long ptr);
	private final native double nativeGetTickInterval(long ptr);
	private final native void nativeSetTickInterval(long ptr, double value);
	private final native double nativeCalculateTickInterval(long ptr, Object dataRange, Object visibleDataRange, double screenLength);
}
