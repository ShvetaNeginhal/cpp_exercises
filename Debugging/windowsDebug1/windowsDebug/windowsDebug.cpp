#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

int method3(int a,int b)
{
	return a / b;

}
int method2(int l1,int l2, int s)
{
	int sum = l1+ l2+ s;
	int count = 3;

	int avg = method3(sum,count );
	int value = avg++;
	return value;
}

int method1(int a, int b)
{
	int local1 = 100;
	int local2 = 200;
	local1++;
	local2 = a + b + local1;
	return method2(local1, local2, a + b);
}
int main()
{
	int v1 = 10, v2 = 20;
	int res = method1(v1, v2);
	cout << "result =" << res;
}

