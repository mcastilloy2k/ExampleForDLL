#include "stdafx.h"  
#include <string>
#include "StringUtils.h"
#include "windows.h"

namespace StringUtils
{

	int Count(const char * text)
	{
		std::string result = text;
		return result.size();
	}
	char * Transform(const char * text)
	{
		return nullptr;
	}
}
