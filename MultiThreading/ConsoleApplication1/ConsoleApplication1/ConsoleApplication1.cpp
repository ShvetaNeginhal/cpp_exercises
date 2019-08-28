// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
#include<thread>
#include<future>
#include<utility>
using namespace std;


void fx1()
{
	for (int i = 0; i < 100; i++)
	{
		cout << "Fx1()" << i << endl;
	}
}

void fx2(int a, int b)
{
	for (int i = 0; i < 100; i++)
	{
		cout << "Fx2()" << i << endl;
	}
}
class MyFunctor
{
public:
	void operator() ()
	{
		cout << "In myFunctor() :" << this_thread::get_id() << endl;
	}
};
class Acc
{
public:
	void calInt()
	{
		cout << "Calculating Interest :" << this_thread::get_id() << endl;
	}
};

void Swap(int &a,int &b)
{
	int t = a;
	a = b;
	b = t;
}

class Math
{
public:
	int sum(int a, int b)
	{
		return a + b;
	}
	void findSum(promise<int> promObj, int a, int b)
	{
		promObj.set_value(sum(a, b));
	}
	
	
	int max_(int a, int b) { return a > b ? a : b; }

	
};

	
	
	/*void findMax(promise<int> * max_promObj, int a, int b)
	{
		max_promObj->set_value(max(a, b));
	}
*/

int main()
{
	/*fx1();
	fx2();*/

	//Swappping
	/*int a = 100,b = 9;
	thread t1(Swap, ref(a),ref( b));
	t1.join();
	cout << "A=" << a << "\t" << "B=" << b<<endl;*/

	//functors

	/*MyFunctor mf1;
	thread t2(mf1);*/

	/*Acc acc;
	thread t1(&Acc::calInt,acc);
	t1.join();*/
	
	cout << "in main"<< this_thread::get_id() << endl;

	//---> function pointers
	/*thread t1(fx2, 10, 20);
	t1.join();*/
	//thread t2(fx2);

	
	//Using lambda statements
	/*thread t3([]{ cout << "Using lambda :" << this_thread::get_id() << endl; });*/
	/*t1.join();
	t2.join();
	t3.join();*/
	Math math;
	promise<int> promiseObj;
	future<int> futureObj = promiseObj.get_future();

	thread t1(&Math::findSum,move(promiseObj),move(10),move(20),math);
	
	cout << futureObj.get() <<endl;
	t1.join();
	
	
	/*cout << "back in main" << endl;
	int x;
	cin >> x;
*/
}

