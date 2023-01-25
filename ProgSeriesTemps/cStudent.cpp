#include "cStudent.h"
#include "gsl/gsl_randist.h"


cStudent::cStudent(std::string theName, gsl_vector* theParam, gsl_rng* r)
{
    this->theName = theName;
    this->theParams = theParam;
    this->r = r;
}

double cStudent::mSimulate()
{   
    double myZ = gsl_ran_gaussian(this->r, 1);
    double myChi2 = 0;
    int K = gsl_vector_get(this->theParams, 0);
    for (int k = 0; k < K ; k++) {
        double myGaussianSimul = gsl_ran_gaussian(this->r, 1);
        myChi2 += myGaussianSimul * myGaussianSimul;
    }
    return myZ / (std::sqrt(myChi2/K)) ;
}
