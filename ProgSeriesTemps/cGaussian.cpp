#include "cGaussian.h"
#include "gsl/gsl_randist.h"

cGaussian::cGaussian(std::string theName, gsl_rng* r) {
	this->r = r;
	this->theName = theName;

}

double cGaussian::mSimulate()
{
	return gsl_ran_gaussian(this->r, 1);;
}






