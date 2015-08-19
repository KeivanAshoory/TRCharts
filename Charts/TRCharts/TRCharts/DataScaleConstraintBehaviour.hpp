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

#ifndef Charts_DataScaleConstraintBehaviour_hpp
#define Charts_DataScaleConstraintBehaviour_hpp

#include <TRCharts/Common.hpp>
#include <TRCodegenSupport/BaseObject.hpp>
#include <TRCharts/ConstraintBehaviour.hpp>
#include <TRCharts/Transform.hpp>
#include <TRCharts/Size.hpp>

namespace Charts
{
	
	class DataScaleConstraintBehaviour;
	class Axis;
	class Chart;

	
	class GeneratedDataScaleConstraintBehaviour : public CodegenSupport::BaseObject, public Charts::ConstraintBehaviour
	{
	public:
		virtual ~GeneratedDataScaleConstraintBehaviour(void);

		std::shared_ptr<DataScaleConstraintBehaviour> getSharedPtr(void);

		std::shared_ptr<const DataScaleConstraintBehaviour> getSharedPtr(void) const;

		virtual const std::vector<std::shared_ptr<Charts::Axis>> & getAxes(void) const = 0;

		virtual void setAxes(const std::vector<std::shared_ptr<Charts::Axis>> & value) = 0;

		virtual Charts::Transform apply(const std::shared_ptr<Charts::Chart> & chart, const Charts::Size & size, const Charts::Transform & transform) const = 0;

	protected:
		GeneratedDataScaleConstraintBehaviour(void);

	};
}

#include <TRCharts/Impl/DataScaleConstraintBehaviourImpl.hpp>

#endif