#include "pch.h"
#include <iostream>
#include<string>
using namespace std;
class Cal
{
public:
	int sum(int a, int b) { return a + b; }
	double divide(int a, int b) 
	{
		if (b != 0)
			return double(a) / double(b);
		else
			throw "Division by zero error";
	}
	int findMax(int a, int b)
	{
		if (a >= 0 & b >= 0)
			return a >= b ? a : b;
		else
			throw "Either of number is negative, try again!";

	}
};
int main()
{
	Cal c;
	int a, b,choice;
	while (true)
	{
		cout << "enter two nos";
		cin >> a >> b;
		cout << "Enter 1-ADD \t 2-DIVIDE \t 3-FIND MAX \t 4-EXIT";
		cin >> choice;
		switch(choice)
		{
		case 1:
			cout<<"Sum of"<<a<<" + "<<b<<" = "<< c.sum(a, b)<<endl;
			break;
		case 2:
			try{
				cout << "division of" << a << " / " << b << " = " << 
					c.divide(a, b) << endl;
				
			}
			catch(int ex)
			{	//exception handler
				cout << "Divide by zero" << endl;
			}
			catch (const char* msg)
			{
				cout << msg << endl;
			}
			break;
		case 3:
			try {
				cout << "Maximum of nos is" << c.findMax(a, b)<<endl;
			}
			catch (const char* msg)
			{
				cout << msg << endl;
			}
			break;
		case 4:
			cout << "Application terminated!";
			return 0;
		default:
			cout << "Incorrect choice";
		}

	}
}
