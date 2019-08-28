#include "pch.h"
#include "BillingSys.h"


void BillingSys::generateBill(SaleList * list)
{
	double totbill;
	totbill = list->getTotal() + list->getTotal() * (tc.getIST() / 100) +
		list->getTotal() * (tc.getFedTax() /100);
	
	cout << "Total Bill = " << totbill;
	
	

}

BillingSys::BillingSys()
{
}


BillingSys::~BillingSys()
{
}
