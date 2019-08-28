#pragma once
class TaxCalcFactory
{
	double ist ;
	double fedtax ;
public:
	TaxCalcFactory(double ist=10, double fedtax = 0.15);
	double getIST();
	double getFedTax();

	~TaxCalcFactory();
};

