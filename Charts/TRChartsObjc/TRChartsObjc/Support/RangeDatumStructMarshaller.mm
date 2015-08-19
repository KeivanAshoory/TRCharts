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

#import <TRChartsObjc/Support/RangeDatumStructMarshaller.hh>
#import <TRChartsObjc/Support/Marshallers.hh>



Charts::RangeDatum TRChartsObjc::RangeDatumStructMarshaller::marshall(const CodegenSupportObjc::StrongAnyPtr & in) const
{
	TRRangeDatum * const tmp = (TRRangeDatum*)in;
	Charts::RangeDatum out;
	out.abscissa = TRChartsObjc::getNumberMarshaller().marshall([tmp abscissa]);
	out.ordinate = TRChartsObjc::getRangeMarshaller().marshall([tmp ordinate]);
	return out;
}


CodegenSupportObjc::StrongAnyPtr TRChartsObjc::RangeDatumStructMarshaller::unmarshall(const Charts::RangeDatum & in) const
{
	TRRangeDatum * out = [[TRRangeDatum alloc] init];
	[out setAbscissa:TRChartsObjc::getNumberMarshaller().unmarshall(in.abscissa)];
	[out setOrdinate:TRChartsObjc::getRangeMarshaller().unmarshall(in.ordinate)];
	return out;
}


Charts::RangeDatum TRChartsObjc::RangeDatumStructMarshaller::marshallBoxed(const id & in) const
{
	return marshall(in);
}


id TRChartsObjc::RangeDatumStructMarshaller::unmarshallBoxed(const Charts::RangeDatum & in) const
{
	return unmarshall(in);
}

// TODO: temporary hack until we fix static init + threads problems properly

void TRChartsObjc::RangeDatumStructMarshaller::init(void) const
{
}

