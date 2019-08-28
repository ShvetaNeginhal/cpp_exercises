#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

//#define ADD(a,b) a+b

#define SWAP(a,b,type)	\
{	type t;				\
	t = a;				\
	a = b;				\
	b = t;				\
}						\

template <typename T>
T add(T a, T b) { return a + b; }

//Template specialization
string add(char a, char b) { 
	string s;
	return s+a+b; }



int main()

{
	int a = 10, b = 20;
	double i1 = 4.5, i2 = 7.7;
	//string a ="set",b = "20", t;
	/*cout << ADD(a, b) << endl;
	cout << ADD("Hello", 4) << endl;
	cout << ADD(10.9f, 0.2f) << endl;
	*/

	////Macros for different data types
	//SWAP(a,b,int)
	//cout << a << " " << b<<endl;
	//SWAP(i1, i2, double)
	//cout << i1 << " " << b;
	//

	cout << add(a, b) << endl;
	cout << add(i1, i2) << endl;
	cout << add<string>("eddy", " tinny") << endl;
	cout << add('a', 'c');
}

