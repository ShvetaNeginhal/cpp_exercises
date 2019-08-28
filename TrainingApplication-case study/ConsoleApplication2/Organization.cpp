#include "pch.h"
#include "Organization.h"



Organization::Organization(string name):name(name)
{
}

string Organization::getname()
{
	cout << name;
	return name;

}


Organization::~Organization()
{
}
