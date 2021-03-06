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
 * Format a date differently for the closest unit.
 * </p>
 * <p>
 * <b>WARNING:</b> This is an automatically generated wrapper around a
 * native object; overriding methods will not work as expected.
 * </p>
 */

@SuppressWarnings("all")
public class PerUnitDateFormatter extends AbstractDateFormatter
{
	/**
	 * Default constructor
	 */

	public PerUnitDateFormatter()
	{
		this(true);
		setHandle(nativeCreate());
	}

	/**
	 * <p>
	 * Set the per-unit format string
	 * </p>
	 * @param unit Relevant unit
	 * @param format Format string (in either platform format or c-standard library format, depending on syntax parameter)
	 */

	public void setUnitFormat(final DateUnit unit, final String format)
	{
		nativeSetUnitFormat(getHandle(), unit, format);
	}

	/**
	 * <p>
	 * Get the per-unit format string (returns the empty string if no format set
	 * for this unit)
	 * </p>
	 * @param unit Relevant unit
	 * @return The result.
	 */

	public String getUnitFormat(final DateUnit unit)
	{
		return nativeGetUnitFormat(getHandle(), unit);
	}

	/**
	 * <p>
	 * Set the per-unit-zero format string (used when values below the unit are
	 * zero)
	 * </p>
	 * @param unit Relevant unit
	 * @param format Format string (in either platform format or c-standard library format, depending on syntax parameter)
	 */

	public void setZeroUnitFormat(final DateUnit unit, final String format)
	{
		nativeSetZeroUnitFormat(getHandle(), unit, format);
	}

	/**
	 * <p>
	 * Get the per-unit-zero format string (returns the empty string if no
	 * format set for this unit)
	 * </p>
	 * @param unit Relevant unit
	 * @return The result.
	 */

	public String getZeroUnitFormat(final DateUnit unit)
	{
		return nativeGetZeroUnitFormat(getHandle(), unit);
	}

	// need this to prevent default constructor in base classes
	/*package*/ PerUnitDateFormatter(boolean dummy)
	{
		super(dummy);
	}

	protected void onFinalize()
	{
		nativeDestroy(getHandle());
	}

	private final native long nativeCreate();
	private final native void nativeDestroy(long ptr);
	private final native void nativeSetUnitFormat(long ptr, Object unit, String format);
	private final native String nativeGetUnitFormat(long ptr, Object unit);
	private final native void nativeSetZeroUnitFormat(long ptr, Object unit, String format);
	private final native String nativeGetZeroUnitFormat(long ptr, Object unit);
}
