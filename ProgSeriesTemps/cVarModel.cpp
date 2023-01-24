#include "cVarModel.h"

cVarModel::cVarModel()
{
}

cVarModel::cVarModel(double* phi, double* theta, int p, int q, string theName)
{
}

cVarModel::~cVarModel()
{
}

double* cVarModel::simulate(double sigma, int n, int seed)
{
	return nullptr;
}

void cVarModel::fit(double* input)
{
}

double** cVarModel::predict(double* input)
{
	return nullptr;
}

double cVarModel::loglikelihood(double* input)
{
	return 0.0;
}

double cVarModel::gradient(double* input)
{
	return 0.0;
}

double** cVarModel::hessian(double* input)
{
	return nullptr;
}

void cVarModel::copy(cVarModel varMod)
{
}
