#include "pch.h"
#include "TaxCalcFactory.h"




TaxCalcFactory::TaxCalcFactory(double ist, double fedtax):ist(ist),
fedtax(fedtax)
{
}

double TaxCalcFactory::getIST()
{
	return ist;
}

double TaxCalcFactory::getFedTax()
{
	return fedtax;
}

TaxCalcFactory::~TaxCalcFactory()
{
}
