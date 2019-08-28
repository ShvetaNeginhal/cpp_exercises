#include "pch.h"
#include "Order.h"


Order::Order()
{
}

void Order::addOrderedItem(orderedItem oi)
{
	
		this ->orderitems.push_back(oi);

	
}

vector<orderedItem> Order::getOrderedItems()
{
	return orderitems;
}

double Order::getOrderValue()
{
	double ordervalue = 0.0;
	for (orderedItem ordereditem : orderitems) {
		ordervalue += ordereditem.getOrderedItemValue();
	}
	return ordervalue;
}



