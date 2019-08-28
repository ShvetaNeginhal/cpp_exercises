#include "pch.h"
#include "orderedItem.h"

orderedItem::orderedItem(int qty, item i) : qty(qty),i(i)
{
}

int orderedItem::getQuantity()
{
	return qty;
}

item orderedItem::getItem()
{
	return i;
}

double orderedItem::getOrderedItemValue()
{
	return qty * i.getrate();
}


