#include "pch.h"
#include <iostream>
#include<exception>
#include<string>
#include<math.h>
using namespace std;
class SqrtEx : public exception
{
public:
	char const* what() const
	{
		return "Invalid no";
	}
};
class ComputeSqRoot
{
private:
	int no;
public:
	ComputeSqRoot(int n) :no(n){}
	int getNo() { return no; }
	int SqRoot(int n)
	{
		if (n < 0)
			throw SqrtEx();
		else
			return sqrt(n);
	}
};


int main()
{
	ComputeSqRoot cr(9);
	try {
		int ans = cr.SqRoot(-9);
		cout<<"Square root= "<<ans ;
	}
	catch(SqrtEx &ex)
	{
		cout << ex.what() << endl;
	}

}

