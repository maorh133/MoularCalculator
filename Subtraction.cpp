#include "Subtraction.h"



Subtraction::Subtraction()
{
}


Subtraction::~Subtraction()
{
}


bool Subtraction::supportsOperation(std::string op_string)
{
	return std::strcmp(op_string.c_str(), "sub") == 0 || std::strcmp(op_string.c_str(), "subt") == 0 || std::strcmp(op_string.c_str(), "-") == 0;
}

int Subtraction::requiredParameters()
{
	return 1;
}

double Subtraction::calcResult(double currVal, std::vector<std::string> parameters)
{

	return currVal - std::stof(parameters[0]);
}

