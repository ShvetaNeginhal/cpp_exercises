

#include "pch.h"
#include <iostream>
#include "SaleItem.h"
#include "Sale.h"
#include "SaleList.h"
#include "BillingSys.h"
#include "TaxCalcFactory.h"
int main()
{
	SaleItem item1("Monitor", 7000);  // desc and rate  
	SaleItem item2("Hard disk",5500);

	Sale *sale1 = new Sale(item1, 2, 5); // item, qty and discount  
	Sale *sale2 = new Sale(item2,5,10); 

	SaleList *list = new SaleList("16-03-2006", "Jennifer");  
	list->add(sale1);  
	list->add(sale2);

	TaxCalcFactory tc;
	BillingSys *sys = new BillingSys();
	sys->generateBill(list);
}

