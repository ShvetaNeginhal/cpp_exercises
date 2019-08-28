#pragma once
#include "SaleList.h"
#include "TaxCalcFactory.h"
class BillingSys
{
private:
	TaxCalcFactory tc;

public:
	void generateBill(SaleList *list);
	BillingSys();
	~BillingSys();
};

