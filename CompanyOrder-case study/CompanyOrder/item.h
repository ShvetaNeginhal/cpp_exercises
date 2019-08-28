#pragma once
#include<iostream>
#include<string>

using namespace std;
class item
{
private:
	double rate;
	string desc;
public:
	item(string desc, double rate);
	string getdesc();
	double getrate();
	
};

