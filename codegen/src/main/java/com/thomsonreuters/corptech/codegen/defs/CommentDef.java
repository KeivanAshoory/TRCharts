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

package com.thomsonreuters.corptech.codegen.defs;

import lombok.Getter;
import lombok.Setter;
import org.apache.commons.lang.WordUtils;

import javax.xml.bind.annotation.XmlAccessType;
import javax.xml.bind.annotation.XmlAccessorType;
import javax.xml.bind.annotation.XmlAttribute;
import javax.xml.bind.annotation.XmlValue;

@Getter
@Setter
@XmlAccessorType(XmlAccessType.FIELD)
public class CommentDef
{
	@XmlAttribute(name = "type")
	private String type = "paragraph";

	@XmlAttribute(name = "scope")
	private String scope = "";

	@XmlValue
	private String body;

	public String getBody()
	{
		String body = this.body;
		if(body != null) {
			body = body.replaceAll("\r?\n\\s+", " ");
			body = body.replaceAll("\\s+\r?\n", " ");
			body = body.replaceAll("\r?\n", " ");
		}
		return body;
	}

	public String wrapBody(int chars, final String prefix, final String newlinePrefix)
	{
		return WordUtils.wrap(prefix + getBody(), chars, "\n" + newlinePrefix, true);
	}
}
