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

#import <TRChartsObjc/Charts.h>

#import <TRCharts/Charts.hpp>

#import <TRChartsObjc/Support/Marshallers.hh>

@implementation TRCharts

-(TRCharts*)init {
	@throw [NSException exceptionWithName:@"Init" reason:@"Cannot construct TRCharts" userInfo:nil];
}

+(TRLogLevel)logLevel {
	return TRChartsObjc::getLogLevelMarshaller().unmarshall(Charts::getLogLevel());
}

+(void)setLogLevel:(TRLogLevel)value {
	Charts::setLogLevel(TRChartsObjc::getLogLevelMarshaller().marshall(value));
}

+(id<TRLogHandler>)logHandler {
	return TRChartsObjc::getLogHandlerMarshaller().unmarshall(Charts::getLogHandler());
}

+(void)setLogHandler:(id<TRLogHandler>)value {
	Charts::setLogHandler(TRChartsObjc::getLogHandlerMarshaller().marshall(value));
}

+(BOOL)debugGLValidationEnabled {
	return TRChartsObjc::getBooleanMarshaller().unmarshall(Charts::isDebugGLValidationEnabled());
}

+(void)setDebugGLValidationEnabled:(BOOL)value {
	Charts::setDebugGLValidationEnabled(TRChartsObjc::getBooleanMarshaller().marshall(value));
}

+(void)markQueue:(dispatch_queue_t)queue
{
	TRChartsObjc::markQueue(queue);
}

+(void)unmarkQueue:(dispatch_queue_t)queue
{
	TRChartsObjc::unmarkQueue(queue);
}

+(BOOL)isQueueMarked
{
	return TRChartsObjc::isQueueMarked();
}

+(void)enableQueueVerification:(BOOL)yes
{
	TRChartsObjc::enableQueueVerification(yes);
}
@end