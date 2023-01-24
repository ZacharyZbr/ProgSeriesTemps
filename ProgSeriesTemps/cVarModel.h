#ifndef cVarModel_h
#define cVarModel_h

#include <iostream>
#include "cTimeSeries.h"
using namespace std;

class cVarModel : public cTimeSeries
{

public:
	double* Phi;
	double* Theta;
	int P;
	int Q;
	string TheName;

public:
	cVarModel();
	cVarModel(double* phi, double* theta, int p, int q, string theName);
	~cVarModel();
	double* simulate(double sigma, int n, int seed);
	void fit(double* input);
	double** predict(double* input);
	double loglikelihood(double* input);
	double gradient(double* input);
	double** hessian(double* input);
	void copy(cVarModel varMod);

};

#endif