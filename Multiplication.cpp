#include "Multiplication.h"



Multiplication::Multiplication()
{
}


Multiplication::~Multiplication()
{
}

bool Multiplication::supportsOperation(std::string op_string)
{
	return std::strcmp(op_string.c_str(), "mult") == 0 || std::strcmp(op_string.c_str(), "mul") == 0 || std::strcmp(op_string.c_str(), "*") == 0;
}

int Multiplication::requiredParameters()
{
	return 1;
}

double Multiplication::calcResult(double currVal, std::vector<std::string> parameters)
{

	return currVal * std::stof(parameters[0]);
}

