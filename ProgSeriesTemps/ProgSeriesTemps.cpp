#include <iostream>
#include "cMeanModel.h"
#include "gsl/gsl_math.h"
#include "gsl/gsl_vector.h"
#include "gsl/gsl_rng.h"
#include "cGaussian.h"
#include "cStudent.h"

int main()
{
    std::cout << "Hello World !" << std::endl;
    int theSize = 2;
    gsl_vector* vect = gsl_vector_calloc(theSize);
    gsl_vector_set(vect, 0, 0);
    gsl_vector_set(vect, 1, 1);
    
    

    gsl_rng* r = gsl_rng_alloc(gsl_rng_taus);
    
    //Test simulation gaussienne
    std::string myName = "Gaussien";

    cGaussian* myGauss = new cGaussian(myName, r);
    double simulation;
    for (int j = 0; j < 25; j++) {
        std::cout<< myGauss->mSimulate() << endl;
    }

    // Test simulation student
    std::string myStudentName = "Student";
    gsl_vector* myParams = gsl_vector_calloc(1);
    gsl_vector_set(myParams, 0, 2);
    cStudent* myStudentSimul = new cStudent(myStudentName, myParams, r);
    for (int j = 0; j < 25; j++) {
        std::cout << myStudentSimul->mSimulate() << endl;
    }


    gsl_vector_free(vect);
    

    

    
}


