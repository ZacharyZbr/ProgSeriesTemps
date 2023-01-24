#ifndef cTimeModel_h
#define cTimeModel_h

#include <iostream>
#include "cDistribution.h"
#include "gsl/gsl_vector.h"

class cTimeModel
{
public:
	std::string theName;
	cDistribution theDistrib;

	cTimeModel(std::string theName, cDistribution theDistrib);
	cTimeModel();
	~cTimeModel();

	
	void plot();



};

#endif

