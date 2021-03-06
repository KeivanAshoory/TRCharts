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
 * <b>WARNING:</b> This is an automatically generated wrapper around a
 * native object; overriding methods will not work as expected.
 * </p>
 */

@SuppressWarnings("all")
public abstract class Series extends ChartElement
{
	/**
	 * Default constructor
	 */

	private Series()
	{
		this(true);
	}

	/**
	 * Get the ordinate axis.
	 * <p>
	 * The ordinate axis is conventionally used to plot the dependent variable.
	 * </p>
	 * @return The current ordinate axis.
	 */

	public ContinuousAxis getOrdinateAxis()
	{
		return (ContinuousAxis)nativeGetOrdinateAxis(getHandle());
	}

	/**
	 * Set the ordinate axis.
	 * <p>
	 * The ordinate axis is conventionally used to plot the dependent variable.
	 * </p>
	 * @param value The new ordinate axis.
	 */

	public void setOrdinateAxis(final ContinuousAxis value)
	{
		nativeSetOrdinateAxis(getHandle(), value);
	}

	/**
	 * Get the color.
	 * <p>
	 * Base color for the visual representation of the series.
	 * </p>
	 * @return The current color.
	 */

	public Color getColor()
	{
		return (Color)nativeGetColor(getHandle());
	}

	/**
	 * Set the color.
	 * <p>
	 * Base color for the visual representation of the series.
	 * </p>
	 * @param value The new color.
	 */

	public void setColor(final Color value)
	{
		nativeSetColor(getHandle(), value);
	}

	/**
	 * <p>
	 * Mark the whole data range as dirty.
	 * </p>
	 */

	public void markDirty()
	{
		nativeMarkDirty(getHandle());
	}

	/**
	 * <p>
	 * Mark a range of datums as dirty (requiring reload in next update/draw).
	 * </p>
	 * @param range Data source range to mark
	 */

	public void markRangeDirty(final IndexRange range)
	{
		nativeMarkRangeDirty(getHandle(), range);
	}

	// need this to prevent default constructor in base classes
	/*package*/ Series(boolean dummy)
	{
		super(dummy);
	}

	private final native Object nativeGetOrdinateAxis(long ptr);
	private final native void nativeSetOrdinateAxis(long ptr, Object value);
	private final native Object nativeGetColor(long ptr);
	private final native void nativeSetColor(long ptr, Object value);
	private final native void nativeMarkDirty(long ptr);
	private final native void nativeMarkRangeDirty(long ptr, Object range);
}
