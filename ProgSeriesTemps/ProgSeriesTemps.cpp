#include <iostream>
#include "cMeanModel.h"
#include "gsl/gsl_math.h"
#include "gsl/gsl_vector.h"
#include "gsl/gsl_rng.h"
#include "cGaussian.h"


int main()
{
    std::cout << "Hello World !" << std::endl;
    int theSize = 2;
    gsl_vector* vect = gsl_vector_calloc(theSize);
    gsl_vector_set(vect, 0, 0);
    gsl_vector_set(vect, 1, 1);
    
    

    gsl_rng* r = gsl_rng_alloc(gsl_rng_taus);
    std::string myName = "Gaussien";

    cGaussian* myGauss = new cGaussian(myName, r);
    double simulation;
    for (int j = 0; j < 25; j++) {
        std::cout<< myGauss->mSimulate() << endl;
    }
    gsl_vector_free(vect);
    

    

    
}


