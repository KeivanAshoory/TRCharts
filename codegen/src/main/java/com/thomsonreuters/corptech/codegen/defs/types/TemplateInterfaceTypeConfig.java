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

package com.thomsonreuters.corptech.codegen.defs.types;

import com.thomsonreuters.corptech.codegen.defs.TemplateInterfaceDef;
import com.thomsonreuters.corptech.codegen.defs.TopLevelDef;
import lombok.Getter;
import org.apache.commons.lang.StringUtils;

import javax.annotation.Nonnull;
import java.util.*;

public class TemplateInterfaceTypeConfig extends TypeConfig
{
	@Getter
	@Nonnull
	private TemplateInterfaceDef interfaceDef;

	@Getter
	@Nonnull
	private final List<TypeConfig> templateArgs;

	public TemplateInterfaceTypeConfig(@Nonnull final TemplateInterfaceDef interfaceDef, @Nonnull final TypeConfig ... templateArgs)
	{
		this.interfaceDef = interfaceDef;
		this.templateArgs = Arrays.asList(templateArgs);
	}

	@Override
	public String getBasicType()
	{
		return "TemplateInterface";
	}

	@Override
	public String getName()
	{
		final StringBuilder result = new StringBuilder();
		result.append(interfaceDef.getName());
		for(final TypeConfig templateArg : templateArgs) {
			result.append("_");
			result.append(templateArg.getName());
		}
		return result.toString();
	}

	@Override
	public String getJavaType()
	{
		final List<String> tmp = new ArrayList<>();
		for(final TypeConfig templateArg : templateArgs) {
			tmp.add(templateArg.getJavaType());
		}
		return interfaceDef.getJavaClassname() + "<" + StringUtils.join(tmp, ",") +  ">";
	}

	@Override
	public String getJavaContainerType()
	{
		return getJavaType();
	}

	@Override
	public boolean isJavaPrimitive() { return false; }

	@Override
	public String getJavaJniType()
	{
		return "Object";
	}

	@Override
	public String getJavaJniContainerType()
	{
		return getJavaJniType();
	}

	@Override
	public String getCppJniType()
	{
		return "jobject";
	}

	@Override
	public String getCppJniArrayType()
	{
		return "jobjectArray";
	}

	@Override
	public String getCppRawType()
	{
		final List<String> tmp = new ArrayList<>();
		for(final TypeConfig templateArg : templateArgs) {
			tmp.add(templateArg.getCppRawType());
		}
		return interfaceDef.getCppNamespacedClassname() + "<" + StringUtils.join(tmp, ",") + ">";
	}

	@Override
	public String getCppValueType()
	{
		return "std::shared_ptr<" + getCppRawType() + ">";
	}

	@Override
	public String getCppConstReferenceType()
	{
		return "const " + getCppValueType() + " &";
	}

	@Override
	public String getCppDefaultValue()
	{
		return "nullptr";
	}

	@Override
	public String getObjcValueType()
	{
		return getObjcRawType();
	}

	@Override
	public String getObjcRawType()
	{
		return "id<" + interfaceDef.getObjcClassname() + ">";
	}

	@Override
	public String getObjcValue(final String spec)
	{
		return "nil";
	}

	@Override
	public String getObjcMarshallType()
	{
		return "id";
	}

	@Override
	public boolean isObjcPrimitive()
	{
		return false;
	}

	@Override
	public String getObjcFormatPlaceholder()
	{
		return "@";
	}

	@Override
	public String getJniMarshaller()
	{
		final List<String> types = new ArrayList<>();
		final List<String> marshallers = new ArrayList<>();
		for(final TypeConfig templateArg : templateArgs) {
			types.add(templateArg.getCppRawType());
			marshallers.add("get" + templateArg.getName() + "Marshaller()");
		}
		return interfaceDef.getName() + "InterfaceMarshaller<" + StringUtils.join(types, ", ") + ">(" + StringUtils.join(marshallers, ", ") + ")";
	}

	@Override
	public String getJavaMarshaller()
	{
		return "ObjectMarshaller<" + getJavaType() + ">(" + getJavaType() + ".class)";
	}

	@Override
	public String getObjcMarshaller()
	{
		final List<String> types = new ArrayList<>();
		final List<String> marshallers = new ArrayList<>();
		for(final TypeConfig templateArg : templateArgs) {
			types.add(templateArg.getCppRawType());
			marshallers.add("get" + templateArg.getName() + "Marshaller()");
		}
		return interfaceDef.resolveVariable("objcSupportNamespace") + "::" + interfaceDef.getName() + "InterfaceMarshaller<" + StringUtils.join(types, ", ") + ">(" + StringUtils.join(marshallers, ", ") + ")";
	}

	@Override
	public TypeConfig getHintType()
	{
		return this;
	}

	@Override
	public boolean isReturnable()
	{
		return true;
	}

	@Override
	public boolean isBound()
	{
		boolean result = true;
		for(final TypeConfig templateArg : templateArgs) {
			result = result && templateArg.isBound();
		}
		return result;
	}

	public TypeConfig bind(final Map<String, TypeConfig> args)
	{
		final List<TypeConfig> tmp = new ArrayList<>();
		for(final TypeConfig templateArg : templateArgs) {
			tmp.add(templateArg.bind(args));
		}
		return new TemplateInterfaceTypeConfig(interfaceDef, tmp.toArray(new TypeConfig[tmp.size()]));
	}

	@Override
	public Set<TopLevelDef> getSuperDependencies()
	{
		return getForwardDependencies();
	}

	@Override
	public Set<TopLevelDef> getDependencies()
	{
		final Set<TopLevelDef> result = new LinkedHashSet<>();
		for(final TypeConfig templateArg : templateArgs) {
			result.addAll(templateArg.getDependencies());
		}
		return result;
	}

	@Override
	public Set<TopLevelDef> getForwardDependencies()
	{
		final Set<TopLevelDef> result = new LinkedHashSet<>();
		result.add(interfaceDef);
		for(final TypeConfig templateArg : templateArgs) {
			result.addAll(templateArg.getDependencies());
		}
		return result;
	}

	@Override
	public Set<TypeConfig> getReferencedTypes()
	{
		final Set<TypeConfig> result = new LinkedHashSet<>();
		result.addAll(super.getReferencedTypes());
		result.addAll(templateArgs);
		return result;
	}

	@Override
	public String getJniSignature()
	{
		return interfaceDef.getJniSignature();
	}
}
