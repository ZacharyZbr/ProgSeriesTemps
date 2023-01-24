#include "cTimeSeries.h"

cTimeSeries::cTimeSeries(double *theData, int theSize){
	this->theData = theData;
	this->theSize = theSize;
}

cTimeSeries::cTimeSeries(double* theData, int theSize, std::string theName)
{
}

cTimeSeries::cTimeSeries() {
}

cTimeSeries::~cTimeSeries()
{
}

double cTimeSeries::mean() {
	return 0;

}

double cTimeSeries::std() {
	return 0;
}

void cTimeSeries::plot()
{
}
