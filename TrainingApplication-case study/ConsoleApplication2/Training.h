#pragma once
#include<iostream>
#include<string>
using namespace std;
class Training
{
public:
	Training();
	virtual int getNumOfTrainees() = 0;
	virtual string getTrainingOrgName() = 0;
	virtual int getTrainingInHrs() = 0;
	~Training();
};

