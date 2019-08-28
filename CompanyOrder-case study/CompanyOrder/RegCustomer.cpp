#include "pch.h"
#include "RegCustomer.h"




RegCustomer::RegCustomer(double splDiscount):splDiscount(splDiscount)
{
}

double RegCustomer::getSplDiscount()
{
	return splDiscount;
}

double RegCustomer::getOrderValue()
{
	double orderValue = Customer::getOrderValue();
	orderValue += splDiscount * orderValue / 100;
	return orderValue;
}


