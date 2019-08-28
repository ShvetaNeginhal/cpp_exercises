#pragma once
#include<iostream>
#include<string>
#include "trainer.h"

using namespace std;

class trainee
{
private:
	int nooftrainees;
	string orgname;
	int traininghrs;
public:
	trainee(int nooftrainees, string orgname, int traininghrs);
	
	int getNumOfTrainees();
	string getTrainingOrgName();
	int getTrainingInHrs();


	~trainee();
};

