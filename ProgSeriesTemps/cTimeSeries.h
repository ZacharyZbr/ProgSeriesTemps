#ifndef cTimeSeries_h
#define cTimeSeries_h

#include <iostream>
#include <string>



class cTimeSeries
{
public:
	std::string theName;
	int theSize;
	double *theData;


	cTimeSeries(double *theData, int theSize, std::string theName);
	cTimeSeries();
	~cTimeSeries();
	
	cTimeSeries(double* theData, int theSize);
	double mean();
	double std();
	void plot();

	
};


#endif

