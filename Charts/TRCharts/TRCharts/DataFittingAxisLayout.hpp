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

#ifndef Charts_DataFittingAxisLayout_hpp
#define Charts_DataFittingAxisLayout_hpp

#include <TRCharts/Common.hpp>
#include <TRCodegenSupport/BaseObject.hpp>
#include <TRCharts/AxisLayout.hpp>
#include <TRCharts/DataTransform.hpp>
#include <TRCharts/Range.hpp>

namespace Charts
{
	
	class DataFittingAxisLayout;
	class RangeCalculator;
	class ContinuousAxis;

	
	class GeneratedDataFittingAxisLayout : public CodegenSupport::BaseObject, public Charts::AxisLayout
	{
	public:
		virtual ~GeneratedDataFittingAxisLayout(void);

		std::shared_ptr<DataFittingAxisLayout> getSharedPtr(void);

		std::shared_ptr<const DataFittingAxisLayout> getSharedPtr(void) const;

		virtual const std::shared_ptr<Charts::RangeCalculator> & getRangeCalculator(void) const = 0;

		virtual void setRangeCalculator(const std::shared_ptr<Charts::RangeCalculator> & value) = 0;

		virtual Charts::DataTransform calculateTransform(const std::shared_ptr<Charts::ContinuousAxis> & axis, const Charts::Range & dataRange, double screenLength, const Charts::DataTransform & renderTransform) const = 0;

	protected:
		GeneratedDataFittingAxisLayout(void);

	};
}

#include <TRCharts/Impl/DataFittingAxisLayoutImpl.hpp>

#endif