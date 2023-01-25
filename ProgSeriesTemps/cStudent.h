#ifndef cStudent_h
#define cStudent_h

#include <iostream>
#include "cDistribution.h"

class cStudent : public cDistribution
{
public:
	cStudent(std::string theName, gsl_vector* theParam, gsl_rng* r);
	double mSimulate();
};

#endif
