#pragma once
#include<iostream>
#include<vector>
#include "orderedItem.h"
class Order
{
private:
	vector <orderedItem> orderitems;

public:
	Order();
	void addOrderedItem(orderedItem oi);
	vector <orderedItem> getOrderedItems();
	double getOrderValue();
	
};

