#include "pch.h"
#include "SaleList.h"
#include<iostream>
using namespace std;

SaleList::SaleList(string dtSale, string custName):dtSale(dtSale),
custName(custName)
{
}

string SaleList::getCustName()
{
	return custName;
}

string SaleList::getDtSale()
{
	return dtSale;
}

void SaleList::add(Sale *s)
{
	sales.push_back(shared_ptr<Sale> (s));
}

vector <shared_ptr<Sale>> SaleList::getSales()
{
	return sales;
}


double SaleList::getTotal()
{
	double total = 0;
	for (int i = 0; i < sales.size(); i++) {
		total += sales[i]->getTotal();
	}
	return total;
}

SaleList::~SaleList()
{
}
