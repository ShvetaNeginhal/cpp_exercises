#pragma once
#include<iostream>
#include<string>
#include "Organization.h"
#include "Training.h"
using namespace std;
class trainer
{
private:
	int nooftrainees;
	string orgname;
	int durationinhrs;

public:
	
	trainer(int nooftrainees, string orgname, int durationinhrs);
	Training *training;
	/*training = new Training;
	training ->getNumOfTrainees();
	training ->getTrainingOrgName();
	training ->getTrainingInHrs();*/
	string getOrganization(Organization o);

	~trainer();
	
};

