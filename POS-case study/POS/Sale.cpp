#include "pch.h"
#include "Sale.h"


Sale::Sale(SaleItem saleitem, int qty, double disc):saleitem(saleitem),
qty(qty),disc(disc)
{
}

SaleItem Sale::getItem()
{
	return saleitem;
}

double Sale::getdisc()
{
	return disc;
}

int Sale::getQty()
{
	return qty;
}

double Sale::getTotal()
{
	double total = 0;
	total = (qty * saleitem.getRate()) - (qty * saleitem.getRate() * disc / 100);
	return total;
}


Sale::~Sale()
{
}
