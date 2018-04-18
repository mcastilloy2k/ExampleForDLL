#pragma once

namespace StringUtils
{
	extern "C" __declspec(dllexport) int Count(const char *text);
	extern "C" __declspec(dllexport) char* Transform(const char *text);
}
