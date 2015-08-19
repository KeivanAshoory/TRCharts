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

#ifndef Charts_Edge_hpp
#define Charts_Edge_hpp

#include <TRCharts/Common.hpp>

namespace Charts
{
	enum class Edge
	{
		Left,
		Right,
		Bottom,
		Top
	};

	namespace Enums
	{
		template <>
		inline size_t size<Edge>(void)
		{
			return 4;
		}

		template <>
		inline const char * name<Edge>(Edge value)
		{
			switch(value) {
			case Edge::Left:
				return "Left";
			case Edge::Right:
				return "Right";
			case Edge::Bottom:
				return "Bottom";
			case Edge::Top:
				return "Top";
			default:
				return "?";
			}
		}
	}

	inline std::ostream & operator<<(std::ostream & to, const Edge & from)
	{
		to << std::string(Enums::name(from));
		return to;
	}

}

#endif