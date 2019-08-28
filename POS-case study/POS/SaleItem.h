	#pragma once
#include<iostream>
#include<string>
using namespace std;
class SaleItem
{
private:
	double rt;
	string des;

public:
	SaleItem(string des,double rt);
	string getDes();
	double getRate();
	~SaleItem();
};

