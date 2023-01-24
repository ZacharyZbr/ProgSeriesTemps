#ifndef cGaussian_h
#define cGaussian_h

#include <iostream>
#include "cDistribution.h"

class cGaussian : public cDistribution
{
public:
	cGaussian(std::string theName, gsl_rng* r);
	double mSimulate();
};

#endif
