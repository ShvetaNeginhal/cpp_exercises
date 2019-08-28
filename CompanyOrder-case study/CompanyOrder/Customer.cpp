#include "pch.h"
#include "Customer.h"




void Customer::addOrder(Order order)
{
	this-> orders.push_back(order);
}

vector<Order> Customer::getOrder()
{
	return orders;
}



double Customer::getOrderValue()
{
	double orderValue = 0;
	for (Order order : orders) {
		orderValue += order.getOrderValue();
	}
	return orderValue;
}



