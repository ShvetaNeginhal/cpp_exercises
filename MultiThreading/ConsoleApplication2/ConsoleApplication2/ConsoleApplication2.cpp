// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<vector>
#include<string>
#include<thread>
#include<utility>
#include<mutex>
using namespace std;

vector <int> largeNumbers;
mutex m;

void fillNum()
{
	for (int i = 0; i < 100000; i++) {
		lock_guard<mutex> lg(m);
		largeNumbers.push_back(i);
		
	}
}
int main()
{
	
	thread t1(fillNum);
	thread t2(fillNum);

	t1.join();
	t2.join();
	cout << "res = " << largeNumbers.size() << endl;
}

