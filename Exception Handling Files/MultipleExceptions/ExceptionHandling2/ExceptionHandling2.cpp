#include "pch.h"
#include <iostream>
#include <exception>
#include <string>
using namespace std;
class Account
{
	int accno, pin;
	double balance;

public:
	Account(int accno,int pin,double amt):accno(accno),pin(pin),
		balance(amt){}
	int getAcc() const{ return accno; }
	int getPin() const { return pin; }
	double getBalance() const { return balance; }
	void setBalance(double amt) { balance += amt; }
	void deductBalance(double amt) { balance -= amt; }
};
class InvalidAmountException : public exception
{
	const char *msg;
public:
	InvalidAmountException(const char *msg=NULL):msg(msg){}
	char const* what() const
	{	
		return msg;
	}
};
//class NoBalance_ex : public exception
//{
//public:
//	char const* what() const
//	{
//		return "No minimum balance";
//	}
//};
class InvalidPin_ex : public exception
{
public:
	char const* what() const
	{
		return "Invalid Pin";
	}
};
class AccManager
{
public:
	void Deposit(Account &acc, double amt)
	{
		double bal;
		if (amt >= 100) {
			acc.setBalance(amt);
		}
		else
			throw InvalidAmountException("Invalid Deposit Amount. Min is Rs.100");
		
	}
	void WithDraw(Account &acc, int pin, double amt)
	{
		if (acc.getPin() != pin)
			throw InvalidPin_ex();
		else if (acc.getBalance() < amt)
			throw InvalidAmountException("No minimum balance");
		else
			{
				acc.deductBalance(amt);
				cout << "Amount Withdrawn";
			}
		
	}
};
int main()
{
    
	Account a(112233,4567,20);
	AccManager am;
	try {
		//am.Deposit(a, 500);
		am.WithDraw(a,4567, 100);

	}
	catch (InvalidAmountException &ex)
	{
		cout << ex.what() << endl;
	}
	
	catch (InvalidPin_ex &ex)
	{
		cout << ex.what() << endl;
	}
}

