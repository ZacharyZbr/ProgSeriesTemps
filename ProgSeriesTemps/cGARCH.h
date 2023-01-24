
#pragma once
#ifndef cGARCH_h
#define cGARCH_h

#include <iostream>
#include "cVarModel.h";

class cGARCH : public cVarModel
{
public:
	cGARCH(double* phi, double* theta, int p, int q, std::string theName);
	~cGARCH();
};

#endif
