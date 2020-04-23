#pragma once
#include <iostream>
#include <cstdarg>
#include <locale>

namespace Varparm
{
	int ivarparm(int i, int a, ...);
	int svarparm(short s, short a, ...);
	double fvarparm(float f, ...);
	double dvarparm(double d, ...);
}