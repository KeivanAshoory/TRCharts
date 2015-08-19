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

#ifndef Charts_RangeDatum_hpp
#define Charts_RangeDatum_hpp

#include <TRCharts/Common.hpp>
#include <TRCharts/ContinuousDatum.hpp>
#include <TRCharts/Range.hpp>

#include <ostream>

namespace Charts
{
	
	struct RangeDatum;

	
	struct GeneratedRangeDatum: public Charts::ContinuousDatum
	{
		Charts::Range ordinate;

		GeneratedRangeDatum(void);

		GeneratedRangeDatum(double abscissa, const Charts::Range & ordinate);

		bool operator==(const GeneratedRangeDatum & other) const;

		bool operator!=(const GeneratedRangeDatum & other) const;
	};

	
	std::ostream & operator<<(std::ostream & to, const GeneratedRangeDatum & from);
}

#include <TRCharts/Impl/RangeDatumImpl.hpp>

#endif