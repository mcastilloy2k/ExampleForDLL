// MathLibrary.cpp : Defines the exported functions for the DLL application.  
// Compile by using: cl /EHsc /DMATHLIBRARY_EXPORTS /LD MathLibrary.cpp  

#include "stdafx.h"  
#include "MathLibrary.h"  

namespace MathLibrary
{
	double Functions::Add(double a, double b)
	{
		return a + b;
	}

	double Functions::Multiply(double a, double b)
	{
		return a * b;
	}

	double Functions::AddMultiply(double a, double b)
	{
		return a + (a * b);
	}

	extern "C" double __declspec(dllexport) Add(double a, double b)
	{
		return Functions::Add(a, b);
	}

	extern "C" double __declspec(dllexport) Multiply(double a, double b)
	{
		return Functions::Multiply(a, b);
	}

	extern "C" double __declspec(dllexport) AddMultiply(double a, double b)
	{
		return Functions::AddMultiply(a, b);
	}
}