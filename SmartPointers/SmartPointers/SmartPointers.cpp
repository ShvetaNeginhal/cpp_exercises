#include "pch.h"
#include <iostream>
using namespace std;

//class Emp
//{
//public:
//	 Emp() { cout << "Employee()" << endl; }
//	 virtual ~Emp() { cout << "Employee()" << endl; }
//
//};
//
//class Manager : public Emp
//{
//public:
//	Manager() { cout << "Manager()" << endl; }
//	~Manager() { cout << "Manager()" << endl; }
//};

class A
{
public:
	A()
	{
		cout << "A()" << endl;
	}
	A(A& a)
	{
		cout << "A(A&)" << endl;
	}
	A& operator=(A &a)
	{
		cout << "operator A = " << endl;
		return *this;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
};

class B
{
public:
	B()
	{
		cout << "B()" << endl;
	}
	B(B& b)
	{
		cout << "B(B&)" << endl;
	}
	B& operator=(B &b)
	{
		cout << "operator B = " << endl;
		return *this;
	}
	~B()
	{
		cout << "~B()" << endl;
	}
};

class C
{
	A a;
	B b;
public:
	C()
	{
		cout << "C()" << endl;
	}
	C(A& _a, B& _b) : a(_a), b(_b)
	{

		cout << "C(A&,B&)" << endl;
	}

	C(C& c)
	{
		cout << "C(C&)" << endl;
	}
	C& operator=(C &C)
	{
		cout << "operator C = " << endl;
		return *this;
	}
	~C()
	{
		cout << "~C()" << endl;
	}
};


void fx() {
	/*A *a = new A;
	delete a;*/
	Wraper a(new A);

}

class Wraper
{
	A *a;
public:
	Wraper(A *a) :a(a){}
	~ Wraper() { delete a; }
};

int main()
{
	/*Emp *e1 = new Emp;
	delete e1;*/
	/*Manager *m = new Manager;
	delete m;*/

	fx();

}

