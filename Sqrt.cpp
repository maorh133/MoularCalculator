#include "Sqrt.h"
#include <math.h>


Sqrt::Sqrt()
{
}

Sqrt::~Sqrt()
{
}

bool Sqrt::supportsOperation(std::string op_string)
{
	return std::strcmp(op_string.c_str(), "Sqrt") == 0 || std::strcmp(op_string.c_str(), "sqrt") == 0;
}

int Sqrt::requiredParameters()
{
	return 0;
}

double Sqrt::calcResult(double currVal, std::vector<std::string> parameters)
{
	return std::sqrt(currVal);
}

