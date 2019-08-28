#include "pch.h"
#include "trainee.h"

trainee::trainee(int nooftrainees, string orgname, int traininghrs) :
	nooftrainees(nooftrainees), orgname(orgname), traininghrs(traininghrs)
{
}

int trainee::getNumOfTrainees()
{
	return nooftrainees;
}

string trainee::getTrainingOrgName()
{
	return orgname;
}

int trainee::getTrainingInHrs()
{
	return traininghrs;
}


trainee::~trainee()
{
}
