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
 * Format a date using either the platform formatting mechanism or
 * c-standard library mechanism (dependent on syntax property)
 * </p>
 * <p>
 * <b>WARNING:</b> This is an automatically generated wrapper around a
 * native object; overriding methods will not work as expected.
 * </p>
 */

@SuppressWarnings("all")
public abstract class AbstractDateFormatter extends BaseObject implements DateFormatter
{
	/**
	 * Default constructor
	 */

	private AbstractDateFormatter()
	{
		this(true);
	}

	/**
	 * Get the formatting mode.
	 * <p>
	 * Specifies whether the platform data formatting mechanism or c-standard
	 * library mechanism should be used.
	 * </p>
	 * @return The current formatting mode.
	 */

	public FormatSyntax getSyntax()
	{
		return (FormatSyntax)nativeGetSyntax(getHandle());
	}

	/**
	 * Set the formatting mode.
	 * <p>
	 * Specifies whether the platform data formatting mechanism or c-standard
	 * library mechanism should be used.
	 * </p>
	 * @param value The new formatting mode.
	 */

	public void setSyntax(final FormatSyntax value)
	{
		nativeSetSyntax(getHandle(), value);
	}

	/**
	 * <p>
	 * Format a date
	 * </p>
	 * @param seconds Date value (in seconds)
	 * @param unit Unit hint.
	 * @return The result.
	 */

	public String formatDate(final double seconds, final DateUnit unit)
	{
		return nativeFormatDate(getHandle(), seconds, unit);
	}

	// need this to prevent default constructor in base classes
	/*package*/ AbstractDateFormatter(boolean dummy)
	{
		super(dummy);
	}

	private final native Object nativeGetSyntax(long ptr);
	private final native void nativeSetSyntax(long ptr, Object value);
	private final native String nativeFormatDate(long ptr, double seconds, Object unit);
}