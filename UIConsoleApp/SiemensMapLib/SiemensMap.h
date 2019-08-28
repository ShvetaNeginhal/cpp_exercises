#pragma once

#ifdef SIEMENSMAPLIB_EXPORTS
#define SIEMENSMAPLIB_API __declspec(dllexport)
#else
#define SIEMENSMAPLIB_API __declspec(dllimport)
#endif

class SIEMENSMAPLIB_API SiemensMap
{
public:
	int add2ints(int a, int b);
	int sub2ints(int a, int b);
	double div2ints(double a, double b);
	int getFactorial(int a);
};