#ifndef cMeanModel_h
#define cMeanModel_h

#include <iostream>
#include "cTimeSeries.h"
using namespace std;

class cMeanModel: public cTimeSeries
{
public : 
	double* Phi;
	double* Theta;
	int P;
	int Q;
	// string TheName;
public:
	cMeanModel();
	cMeanModel(double* phi, double* theta, int p, int q);//, string theName);
	~cMeanModel();
	double* simulate(double sigma, int n, int seed);
	void fit(double* input);
	double** predict(double* input);
	double loglikelihood(double* input);
	double gradient(double* input);
	double** hessian(double* input);
	void copy(cMeanModel meanMod);
	
};

#endif