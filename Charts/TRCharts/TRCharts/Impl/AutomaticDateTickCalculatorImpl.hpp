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

#ifndef TRCharts_Impl_AutomaticDateTickCalculatorImpl_hpp
#define TRCharts_Impl_AutomaticDateTickCalculatorImpl_hpp

#include <TRCharts/AutomaticDateTickCalculator.hpp>
#include <TRCharts/DateTickCalculator.hpp>
#include <TRCharts/DateInterval.hpp>
#include <TRCharts/Range.hpp>
#include <TRCharts/Impl/Common.hpp>

namespace Charts
{

	
	class AutomaticDateTickCalculator : public GeneratedAutomaticDateTickCalculator
	{
	public:
		AutomaticDateTickCalculator(void);

		virtual ~AutomaticDateTickCalculator(void);

		virtual double getTargetScreenInterval(void) const;
        
		virtual void setTargetScreenInterval(double value);
        
		virtual const Charts::DateInterval & getMinInterval(void) const;
        
		virtual void setMinInterval(const Charts::DateInterval & value);
        
		virtual Charts::DateInterval calculateTickInterval(const Charts::Range & dataRange, const Charts::Range & visibleDataRange, double screenLength) const;

	private:
		double targetScreenInterval;

        Charts::DateInterval minInterval;
	};
}

#endif