// Templates-Eg1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

template <typename T>
void swap1(T &a, T &b)
{
	T t;
	t = a;
	a = b;
	b = t;

}

template <typename T>
void outputLoop(T &arr,int size)
{
	cout << "Array" << endl;
	for (int i = 0; i < size; i++)
	{
		
		cout << arr[i] << "\t";
	}
}


template <typename T>
bool check(T no1, T no2)
{
	if (no1 > no2)
		return 1;
	else
		return 0;
}

template <typename T>

void sort1(T *nos, int s)
{
	for (int i = 0; i < s; i++) 
	{
		for(int j=0;j<s;j++)
		{
			if (check(nos[i],nos[j]))
			{
				swap1(nos[i], nos[j]);
				
			}
		}
	}
}

template<>
void sort1(const char  **arr,int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			if (strcmp(arr[i], arr[j]) > 0)
			{
				swap1(arr[i],arr[j]);
			}
		}
	}
}

class Acc
{
	string id;
	string name;
	int sal;
public:
	Acc(string id, string name, int sal) :id(id), name(name), sal(sal) {}
	string getId() { return id; }
	string getName() { return name; }
	int getSal() { return sal; }
};
#define Size = 10
int main()
{
	int n[] = { 9, 8, 7, 6, 4, 3, 5, 11, 1, 2 ,99};
	string a[] = { "a","f","g","t","e","w","z","b","v","q","d" };
	const char* arr[] = { "function","templates","are","very","simple",
		"and","powerful" };
	outputLoop(arr, 7);
	sort1(arr, 7);
	
	sort1(arr,7);
	
	cout << endl;
	outputLoop(arr, 7);


	
}

