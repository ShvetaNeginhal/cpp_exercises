#include "pch.h"
#include <iostream>
#include<exception>
#include<string>
using namespace std;

class WaterOverFlow :public exception
{
public:

	char const* what() const
	{
		return "Water Over flow";
	}
};

class WaterUnderFlow :public exception
{
public:
	char const* what() const
	{
		return "Water Under flow";
	}
};

class WaterTank
{
public:
	int currentCap;
	int maxCap;
	WaterTank(int currentCap,int maxCap):currentCap(currentCap),
		maxCap(maxCap) {}
	int getCurrentCap() const{
		return currentCap;
	}
	int getMaxCap() const {
		return maxCap;
	}
	int addWater (int waterAdd) 
	{
		if (waterAdd + currentCap > maxCap)
		{
			throw WaterOverFlow();
		}
		else
			return currentCap += waterAdd;
	}
	
		int Drain(int drainWater)
	{
		if (currentCap - drainWater < 0)
		{
			throw WaterUnderFlow();
		}
		else
		{
			return currentCap -= drainWater;
		}
	}
};

int main()
{
	WaterTank wt(200,500);
	try {
		wt.addWater(200);
		cout << "Water Added!" <<endl<< "Current Capacity"<<
			wt.getCurrentCap()<<endl;
		wt.Drain(250);
		cout << "water drained!" <<endl<<"Current Capacity"<<
			wt.getCurrentCap()<<endl;
	}
	catch (WaterOverFlow &ex)
	{
		cout << ex.what() << endl;
	}
	catch (WaterUnderFlow &ex)
	{
		cout << ex.what() << endl;
	}
}

