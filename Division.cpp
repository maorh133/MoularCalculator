#include "Division.h"



Division::Division()
{
}

Division::~Division()
{
}

bool Division::supportsOperation(std::string op_string)
{
	return std::strcmp(op_string.c_str(), "div") == 0 || std::strcmp(op_string.c_str(), "/") == 0;
}

int Division::requiredParameters()
{
	return 1;
}

double Division::calcResult(double currVal, std::vector<std::string> parameters)
{

	return currVal / std::stof(parameters[0]);
}

