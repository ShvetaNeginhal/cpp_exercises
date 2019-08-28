#pragma once
#include<iostream>
#include<vector>
#include "Customer.h"
#include "item.h"
#include "Order.h"
#include "orderedItem.h"
#include "RegCustomer.h"
class Company
{
private:
	vector<Customer> customers;
	vector <item> items;
	

public:
	
	double getTotalWorthOfOrdersPlaced();
	void addItem(item i);
	vector <item> getItems();
	void addCustomer(Customer customer);
	vector <Customer> getCustomer();
	
};

