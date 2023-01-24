#include "cTimeSeries.h"

cTimeSeries::cTimeSeries(std::string theName, int theSize, gsl_vector *theData)
{
	this->theName = theName;
	this->theData = theData;
	this->theSize = theSize;
}

cTimeSeries::cTimeSeries()
{
}


cTimeSeries::~cTimeSeries()
{
}



double cTimeSeries::mean() {
	//TODO
	return 0;

}

double cTimeSeries::std() {
	//TODO
	return 0;
}

void cTimeSeries::plot()
{
	//TODO
}
