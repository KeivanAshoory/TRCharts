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

#ifndef Charts_Impl_DataFittingAxisLayoutImpl_hpp
#define Charts_Impl_DataFittingAxisLayoutImpl_hpp

#include <TRCharts/DataFittingAxisLayout.hpp>
#include <TRCharts/AxisLayout.hpp>
#include <TRCharts/DataTransform.hpp>
#include <TRCharts/Range.hpp>
#include <TRCharts/Impl/Common.hpp>

namespace Charts
{
	class ContinuousAxis;

	
	class DataFittingAxisLayout : public GeneratedDataFittingAxisLayout
	{
	public:
		DataFittingAxisLayout(void);

		virtual ~DataFittingAxisLayout(void);
        
		virtual const std::shared_ptr<Charts::RangeCalculator> & getRangeCalculator(void) const;
        
		virtual void setRangeCalculator(const std::shared_ptr<Charts::RangeCalculator> & value);
        
		virtual Charts::DataTransform calculateTransform(const std::shared_ptr<Charts::ContinuousAxis> & axis, const Charts::Range & dataRange, double screenLength, const Charts::DataTransform & renderTransform) const;

	private:
        std::shared_ptr<Charts::RangeCalculator> rangeCalculator;
	};
}

#endif