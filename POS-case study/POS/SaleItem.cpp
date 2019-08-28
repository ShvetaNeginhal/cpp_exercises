#include "pch.h"
#include "SaleItem.h"






SaleItem::SaleItem(string des, double rt):des(des),rt(rt)
{
}

string SaleItem::getDes()
{
	return des;
}

double SaleItem::getRate()
{
	return rt;
}

SaleItem::~SaleItem()
{
}
