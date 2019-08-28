#pragma once
#include<iostream>
#include<string>
#include<list>

#include "unit.h"
using namespace std;
class modules
{
private:
	string modname;
	list <unit> un;
public:
	modules(string modname);
	string getmodname();
	
	
	un getunits();
	~modules();;
};

