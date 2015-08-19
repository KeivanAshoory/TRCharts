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
 * Format a date (see AbstractDateFormatter)
 * </p>
 * <p>
 * <b>WARNING:</b> This is an automatically generated wrapper around a
 * native object; overriding methods will not work as expected.
 * </p>
 */

@SuppressWarnings("all")
public class BasicDateFormatter extends AbstractDateFormatter
{
	/**
	 * Default constructor
	 */

	public BasicDateFormatter()
	{
		this(true);
		setHandle(nativeCreate());
	}

	/**
	 * Get the format.
	 * <p>
	 * Format string (in either platform format or c-standard library format,
	 * depending on syntax parameter)
	 * </p>
	 * @return The current format.
	 */

	public String getFormat()
	{
		return nativeGetFormat(getHandle());
	}

	/**
	 * Set the format.
	 * <p>
	 * Format string (in either platform format or c-standard library format,
	 * depending on syntax parameter)
	 * </p>
	 * @param value The new format.
	 */

	public void setFormat(final String value)
	{
		nativeSetFormat(getHandle(), value);
	}

	// need this to prevent default constructor in base classes
	/*package*/ BasicDateFormatter(boolean dummy)
	{
		super(dummy);
	}

	protected void onFinalize()
	{
		nativeDestroy(getHandle());
	}

	private final native long nativeCreate();
	private final native void nativeDestroy(long ptr);
	private final native String nativeGetFormat(long ptr);
	private final native void nativeSetFormat(long ptr, String value);
}
