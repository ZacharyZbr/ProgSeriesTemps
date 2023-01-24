#ifndef cDistribution_h
#define cDistribution_h
#include "gsl/gsl_vector.h"
#include "gsl/gsl_rng.h"

#include <iostream>

class cDistribution
{
public:
	std::string theName;
	//gsl_vector* theParams;
	gsl_rng* r;


	virtual double mSimulate();

	
};

#endif 

