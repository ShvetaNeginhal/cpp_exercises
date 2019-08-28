#include "pch.h"
#include "item.h"



item::item(string desc,double rate):desc(desc),rate(rate)
{
}

string item::getdesc()
{
	return desc;
}

double item::getrate()
{
	return rate;
}

