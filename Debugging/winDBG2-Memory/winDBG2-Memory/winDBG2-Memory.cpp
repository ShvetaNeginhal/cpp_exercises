// winDBG2-Memory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<Windows.h>
#include<string>
using namespace std;

void AllocateMemory()
{
int* a = new int[2000];
ZeroMemory(a, 8000);
delete[] a;
Sleep(1);

}
int main()
{
	int i = 1;
	while (1)
	{
		cout << "Allocate Memory "<< i << endl;
		AllocateMemory();
	}
}

