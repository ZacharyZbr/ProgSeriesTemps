#include "cGaussian.h"
#include "gsl/gsl_randist.h"

cGaussian::cGaussian(std::string theName, gsl_rng* r) {
	this->r = r;
	this->theName = theName;
	gsl_vector* vect = gsl_vector_calloc(2);
	gsl_vector_set(vect, 0, 0);
	gsl_vector_set(vect, 1, 1);
	this->theParams = vect;

}

double cGaussian::mSimulate()
{
	return gsl_ran_gaussian(this->r, 1);
}






