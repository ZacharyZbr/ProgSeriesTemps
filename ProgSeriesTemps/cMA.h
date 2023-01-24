
#pragma once
#ifndef cMA_h
#define cMA_h

#include <iostream>
#include "cMeanModel.h";

class cMA : public cMeanModel
{
public:
	cMA(double* phi, double* theta, int p, int q); //string theName);
	~cMA();
};

#endif

