#include "pch.h"
#include <iostream>
#include "orderedItem.h"
#include "Order.h"
#include "Customer.h"
#include "Company.h"
#include "item.h"
#include "RegCustomer.h"
int main()
{
	item i1("Pen", 10);
	item i2("Brush", 20);
	item i3("Paint", 30);
	item i4("Ink", 50);

	orderedItem oi1(20, i1);
	orderedItem oi2(5, i2);
	orderedItem oi3(2, i3);
	orderedItem oi4(1, i4);
	orderedItem oi5(15, i1);

	Order o;
	Order o2;
	o.addOrderedItem(oi1);
	o.addOrderedItem(oi2);
	o2.addOrderedItem(oi4);
	o2.addOrderedItem(oi5);
	o2.addOrderedItem(oi3);

	Customer customer;
	customer.addOrder(o);
	

	RegCustomer rc(10);
	rc.addOrder(o2);
	Company comp;
	comp.addCustomer(customer);
	comp.getTotalWorthOfOrdersPlaced();
}

