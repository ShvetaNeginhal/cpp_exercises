#include "stdafx.h"
#include "SiemensMap.h"

int SiemensMap::add2ints(int a, int b)
{
	return a+b;
}

int SiemensMap::sub2ints(int a, int b)
{
	return a-b;
}

double SiemensMap::div2ints(double a, double b)
{
	if (b == 0) throw 1;
	else
	return a / b;
	
}

int SiemensMap::getFactorial(int a)
{
	if (a > 1)
		return  a * getFactorial(a - 1);
	else if (a == 1)
		return 1;
	else 
		return 0;
}

