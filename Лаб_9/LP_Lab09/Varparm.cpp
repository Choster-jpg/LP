#include "Varparm.h"
using namespace std;

namespace Varparm
{
	int ivarparm(int i, int a,...)
	{
		int mult = 1, buf;
		va_list arg;
		va_start(arg, a);
		mult *= a;
		for (int c = 1; c < i; c++)
		{
			buf = va_arg(arg, int);
			mult *= buf;
		}
		return mult;
	}

	int svarparm(short s, short a, ...)
	{
		int* p = (int*)&a;
		int k = (int)s, i = 0, mult = 1;
		while (i < k)
		{
			mult *= p[i];
			i++;
		}
		return mult;
	}

	double fvarparm(float f, ...)
	{
		
		int i = 0;
		double* u = (double*)(&f+1);
		double sum = f;
		while (u[i] != FLT_MAX)
		{
			sum += *(u+i);
			i++;
		}
		return sum;
	}

	double dvarparm(double d, ...)
	{
		double buf;
		va_list arg;
		va_start(arg, d);
		double sum = d;
		buf = va_arg(arg, double);
		while (buf != DBL_MAX)
		{
			sum += buf;
			buf = va_arg(arg, double);
		}
		return sum;
	}

	
}