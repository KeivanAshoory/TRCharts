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
 * A data-space transformation; could be visualized as a transform matrix
 * (but without a rotation component)
 * </p>
 * <p>
 * <b>NOTE:</b> This is a value class, when passing it to other library
 * methods it is always effectively copied.
 * </p>
 */

@SuppressWarnings("all")
public class DataTransform
{
	private double offset;
	private double scale;

	/**
	 * Initialize a DataTransform with default values.
	 */
	public DataTransform()
	{
	}

	/**
	 * Initialize a DataTransform with provided values.
	 *
	 * @param offset The offset (data space).
	 * @param scale The scale (data space).
	 */

	public DataTransform(double offset, double scale)
	{
		this.offset = offset;
		this.scale = scale;
	}

	/**
	 * Get the offset (data space).
	 * @return The current offset (data space).
	 */

	public final double getOffset()
	{
		return this.offset;
	}

	/**
	 * Set the offset (data space).
	 * @param value The new offset (data space).
	 */

	public final void setOffset(final double value)
	{
		this.offset = value;
	}

	/**
	 * Get the scale (data space).
	 * @return The current scale (data space).
	 */

	public final double getScale()
	{
		return this.scale;
	}

	/**
	 * Set the scale (data space).
	 * @param value The new scale (data space).
	 */

	public final void setScale(final double value)
	{
		this.scale = value;
	}

	@Override
	public String toString()
	{
		return "DataTransform {" +
				"offset=" + offset + ", " +
				"scale=" + scale +
				"}";
	}

	@Override
	public boolean equals(final Object other)
	{
		if(this == other) return true;
		if(!(other instanceof DataTransform)) return false;

		final DataTransform tmp = (DataTransform)other;

		if(!(this.offset == tmp.offset)) return false;
		if(!(this.scale == tmp.scale)) return false;

		return true;
	}

	@Override
	public int hashCode()
	{
		int result = 7;

		result = 31 * result + ((Double)offset).hashCode();
		result = 31 * result + ((Double)scale).hashCode();

		return result;
	}

	/**
	 * <p>
	 * Return the concatenated (multiplied) space transform
	 * </p>
	 * @param dataTransform Input transform
	 * @param otherDataTransform Input transform
	 * @return The result.
	 */

	public static DataTransform concatenate(final DataTransform dataTransform, final DataTransform otherDataTransform)
	{
		return (DataTransform)nativeConcatenate(dataTransform, otherDataTransform);
	}

	/**
	 * <p>
	 * Return the transform that yields the identity when concatenated to the
	 * parameter transform
	 * </p>
	 * @param dataTransform Input transform
	 * @return The result.
	 */

	public static DataTransform invert(final DataTransform dataTransform)
	{
		return (DataTransform)nativeInvert(dataTransform);
	}

	/**
	 * <p>
	 * Transform a scalar into the provided space
	 * </p>
	 * @param dataTransform Input transform
	 * @param value Input value
	 * @return The result.
	 */

	public static double apply(final DataTransform dataTransform, final double value)
	{
		return nativeApply(dataTransform, value);
	}

	/**
	 * <p>
	 * Transform a range into the provided space
	 * </p>
	 * @param dataTransform Input transform
	 * @param range Input value
	 * @return The result.
	 */

	public static Range applyRange(final DataTransform dataTransform, final Range range)
	{
		return (Range)nativeApplyRange(dataTransform, range);
	}

	/**
	 * <p>
	 * Transform a scalar out of the provided space (i.e. into the inverse of
	 * the space)
	 * </p>
	 * @param dataTransform Input transform
	 * @param value Input value
	 * @return The result.
	 */

	public static double unapply(final DataTransform dataTransform, final double value)
	{
		return nativeUnapply(dataTransform, value);
	}

	/**
	 * <p>
	 * Transform a range out of the provided space (i.e. into the inverse of the
	 * space)
	 * </p>
	 * @param dataTransform Input transform
	 * @param range Input range
	 * @return The result.
	 */

	public static Range unapplyRange(final DataTransform dataTransform, final Range range)
	{
		return (Range)nativeUnapplyRange(dataTransform, range);
	}


	private static final native Object nativeConcatenate(Object dataTransform, Object otherDataTransform);
	private static final native Object nativeInvert(Object dataTransform);
	private static final native double nativeApply(Object dataTransform, double value);
	private static final native Object nativeApplyRange(Object dataTransform, Object range);
	private static final native double nativeUnapply(Object dataTransform, double value);
	private static final native Object nativeUnapplyRange(Object dataTransform, Object range);
}
