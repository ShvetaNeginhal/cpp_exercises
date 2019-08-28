#include "pch.h"
#include "modules.h"
#include<iostream>
#include<string>
using namespace std;

modules::modules(string modname) :modname(modname)
{
}

string modules::getmodname()
{
	return modname;
}


un modules::getunits()
{
	return un();
}

modules::~modules()
{
}
