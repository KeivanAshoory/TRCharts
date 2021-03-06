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

#include <TRCharts/Range.hpp>
#include <TRCharts/Range.hpp>


Charts::GeneratedRange::GeneratedRange(void)
	:min(0.0), max(0.0)
{
}


Charts::GeneratedRange::GeneratedRange(double min, double max)
	:min(min), max(max)
{
}


bool Charts::GeneratedRange::operator==(const GeneratedRange & other) const
{
	bool result = true;
	result = result && (this->min == other.min);
	result = result && (this->max == other.max);
	return result;
}


bool Charts::GeneratedRange::operator!=(const GeneratedRange & other) const
{
	return !(*this == other);
}


std::ostream & Charts::operator<<(std::ostream & to, const GeneratedRange & from)
{
	to << "Range[";
	to << "min: " << from.min << ", ";
	to << "max: " << from.max;
	to << "]";
	return to;
}