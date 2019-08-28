#pragma once
#include<iostream>
#include "Order.h"

class Customer
{
private:
	vector <Order> orders;
public:

	
	void addOrder(Order order);
	vector <Order> getOrder();
	virtual double getOrderValue();
	
};

