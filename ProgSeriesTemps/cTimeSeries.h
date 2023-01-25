#ifndef cTimeSeries_h
#define cTimeSeries_h

#include <iostream>
#include "gsl/gsl_vector.h"


class cTimeSeries
{

public:
	std::string theName;
	int theSize;
	gsl_vector* theData;


	cTimeSeries(std::string theName, int theSize, gsl_vector* theData);
	cTimeSeries();
	~cTimeSeries();
	double mean();
	double std();
	void plot();

	
};




#endif

