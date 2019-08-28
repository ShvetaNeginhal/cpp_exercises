#pragma once
#include<iostream>
#include "item.h"
using namespace std;

class orderedItem
{
private:
	int	qty;
	item i;

public:
	orderedItem(int qty,item i);
	int getQuantity();
	item getItem();
	double getOrderedItemValue();
};

