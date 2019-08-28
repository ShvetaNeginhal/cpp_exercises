#pragma once
#include<iostream>
#include "Customer.h"

class RegCustomer : public Customer
{
private:
	double splDiscount;
public:
	RegCustomer(double splDiscount);

	double getSplDiscount();
	double getOrderValue();
};

