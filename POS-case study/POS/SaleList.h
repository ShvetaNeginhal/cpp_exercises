#pragma once
#include<iostream>
#include<string>
#include<vector>
#include "Sale.h"
#include<memory>
using namespace std;
class SaleList
{
private:
	string dtSale;
	string custName;
	vector <shared_ptr<Sale>> sales;
public:
	SaleList(string dtSale, string custName);
	string getCustName();
	string getDtSale();
	void add(Sale *s);
	vector <shared_ptr<Sale>> getSales();
	double getTotal();
	~SaleList();
};

