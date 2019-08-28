#include "pch.h"
#include "Company.h"
#include "RegCustomer.h"



double Company::getTotalWorthOfOrdersPlaced()
{
	double totalWorth =0;
	//double totalDis;
	
	//getCustomer()[1].getOrder()[1].getOrderedItems()[1].

	//for each customer
	for (Customer cust : getCustomer()) 
	{
		totalWorth += cust.getOrderValue();
	}
		//{//For one single customer get his orders (type of array)
		//	double custTotal = 0;
		//	for (Order order : cust.getOrder())
		//	{//for each customer's order's ordered item
		//		for (orderedItem orderedItem : order.getOrderedItems())
		//		{
		//			custTotal = orderedItem.getQuantity() *orderedItem.getItem().getrate();
		//			
		//		}
		//	}
		//	//Downcasting to check if a customer is a regsiter customer or not
		//	RegCustomer *regcus = dynamic_cast<RegCustomer*>(&cust);
		//	if (regcus != NULL) {
		//		totalDis += regcus->getSplDiscount * custTotal / 100;
		//	}
		//	totalworth += custTotal - totalDis;
		//}
	
	
	cout << "Total worth = " << totalWorth;
	return totalWorth;
}

void Company::addItem(item i)
{ 
	items.push_back(i);
}

vector<item> Company::getItems()
{
	return items;
}

void Company::addCustomer(Customer customer)
{
	customers.push_back(customer);
}

vector<Customer> Company::getCustomer()
{
	return customers;
}




