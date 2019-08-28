#pragma once
#include<iostream>
#include<string>
#include<list>
#include "modules.h"

using namespace std;
class course
{
private:
	string coursename;
	list <modules> modu;

public:
	course(string coursename);
	void getmodules();

	~course();
};

