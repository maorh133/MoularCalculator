#include "Pow.h"

Pow::Pow()
{
}
Pow::~Pow()
{
}

bool Pow::supportsOperation(std::string op_string)
{
	return std::strcmp(op_string.c_str(), "Pow") == 0 || std::strcmp(op_string.c_str(), "pow") == 0 || std::strcmp(op_string.c_str(), "^") == 0;
}

int Pow::requiredParameters()
{
	return 1;
}

double Pow::calcResult(double currVal, std::vector<std::string> parameters)
{
	return std::pow(currVal,std::stof(parameters[0]));
}

