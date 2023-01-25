#pragma once
#ifndef cAR_h
#define cAR_h

#include <iostream>
#include "cMeanModel.h";

class cAR : public cMeanModel
{
public :
	cAR(double* phi, double* theta, int p, int q); //, string theName);
	~cAR();
};
// commentaire test 
#endif
