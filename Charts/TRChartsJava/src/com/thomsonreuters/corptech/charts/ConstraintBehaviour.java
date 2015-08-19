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
 * Provides the ability to adjust the charts transform after any movement
 * event.
 * </p>
 * <p>
 * The apply method is called during the update phase, whenever a movement
 * is detected and before any attached objects are updated.
 * </p>
 */

@SuppressWarnings("all")
public interface ConstraintBehaviour
{
	/**
	 * <p>
	 * Called whenever the chart's transform is changed externally, the actual
	 * transform will be overwriten with the return value.
	 * </p>
	 * @param chart Current chart
	 * @param size Screen-space size of the chart
	 * @param transform Screen-space transform
	 * @return The result.
	 */

	Transform apply(Chart chart, Size size, Transform transform);

}
