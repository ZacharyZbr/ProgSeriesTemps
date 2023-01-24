
#pragma once
#ifndef cARCH_h
#define cARCH_h

#include <iostream>
#include "cVarModel.h";

class cARCH : public cVarModel
{
public:
	cARCH(double* phi, double* theta, int p, int q, std::string theName);
	~cARCH();
};

#endif

