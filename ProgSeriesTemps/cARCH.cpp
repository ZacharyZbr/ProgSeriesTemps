#include "cARCH.h"


cARCH::cARCH(double* phi, double* theta, int p, int q, std::string theName) {
		this->Phi = phi;
		this->Theta = theta;
		this->P = p;
		this->Q = q;
		this->TheName = theName;

}

cARCH::~cARCH()
{
}
