#pragma once
#include<iostream>
#include<string>
#include "SaleItem.h"
using namespace std;
class Sale
{
private:
	int qty;
	double disc;
	SaleItem saleitem;	
public:
	Sale(SaleItem saleitem,int qty,double disc);
	SaleItem getItem();
	double getdisc();
	int getQty();
	double getTotal();

	~Sale();
};

