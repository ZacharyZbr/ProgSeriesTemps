#ifndef cTimeSeries_h
#define cTimeSeries_h

#include <iostream>


class cTimeSeries
{
public:
	int theSize;
	double theData[];

	cTimeSeries(double theData[], int theSize);
	~cTimeSeries();
	double mean();
	double std();
	void plot();
};

#endif

