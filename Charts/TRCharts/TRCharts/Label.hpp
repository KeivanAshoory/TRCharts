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

#ifndef Charts_Label_hpp
#define Charts_Label_hpp

#include <TRCharts/Common.hpp>
#include <TRCharts/Drawable.hpp>
#include <TRCharts/Color.hpp>
#include <TRCharts/Font.hpp>
#include <TRCharts/Margin.hpp>
#include <TRCharts/Size.hpp>

namespace Charts
{
	
	class Label;

	
	class GeneratedLabel : public Charts::Drawable
	{
	public:
		virtual ~GeneratedLabel(void);

		std::shared_ptr<Label> getSharedPtr(void);

		std::shared_ptr<const Label> getSharedPtr(void) const;

		virtual const std::string & getText(void) const = 0;

		virtual void setText(const std::string & value) = 0;

		virtual const Charts::Color & getColor(void) const = 0;

		virtual void setColor(const Charts::Color & value) = 0;

		virtual const Charts::Font & getFont(void) const = 0;

		virtual void setFont(const Charts::Font & value) = 0;

		virtual const Charts::Margin & getMargin(void) const = 0;

		virtual void setMargin(const Charts::Margin & value) = 0;

		virtual const Charts::Size & getSize(void) const = 0;

		virtual void setSize(const Charts::Size & value) = 0;

	protected:
		GeneratedLabel(void);

	};
}

#include <TRCharts/Impl/LabelImpl.hpp>

#endif