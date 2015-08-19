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

#ifndef Charts_AutomaticNumberTickCalculator_hpp
#define Charts_AutomaticNumberTickCalculator_hpp

#include <TRCharts/Common.hpp>
#include <TRCodegenSupport/BaseObject.hpp>
#include <TRCharts/NumberTickCalculator.hpp>
#include <TRCharts/Range.hpp>

namespace Charts
{
	
	class AutomaticNumberTickCalculator;

	
	class GeneratedAutomaticNumberTickCalculator : public CodegenSupport::BaseObject, public Charts::NumberTickCalculator
	{
	public:
		virtual ~GeneratedAutomaticNumberTickCalculator(void);

		std::shared_ptr<AutomaticNumberTickCalculator> getSharedPtr(void);

		std::shared_ptr<const AutomaticNumberTickCalculator> getSharedPtr(void) const;

		virtual double getTargetScreenInterval(void) const = 0;

		virtual void setTargetScreenInterval(double value) = 0;

		virtual double getMinInterval(void) const = 0;

		virtual void setMinInterval(double value) = 0;

		virtual double getBase(void) const = 0;

		virtual void setBase(double value) = 0;

		virtual const std::vector<double> & getMultipliers(void) const = 0;

		virtual void setMultipliers(const std::vector<double> & value) = 0;

		virtual double calculateTickInterval(const Charts::Range & dataRange, const Charts::Range & visibleDataRange, double screenLength) const = 0;

	protected:
		GeneratedAutomaticNumberTickCalculator(void);

	};
}

#include <TRCharts/Impl/AutomaticNumberTickCalculatorImpl.hpp>

#endif