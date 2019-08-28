#include "pch.h"
#include "trainer.h"


trainer::trainer()
{
}


trainer::trainer(int nooftrainees, string orgname, int durationinhrs):nooftrainees(nooftrainees),orgname(orgname),durationinhrs(durationinhrs)
{
}

trainer::~trainer()
{
}

string trainer::getOrganization(Organization o)
{
	return o.getname;
}
