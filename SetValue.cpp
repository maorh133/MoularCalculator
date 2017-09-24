#include "SetValue.h"



SetValue::SetValue()
{
}


SetValue::~SetValue()
{
}
bool SetValue::supportsOperation(std::string op_string)
{
	return std::strcmp(op_string.c_str(), "Set") == 0 || std::strcmp(op_string.c_str(), "set") == 0;
}

int SetValue::requiredParameters()
{
	return 1;
}

double SetValue::calcResult(double currVal, std::vector<std::string> parameters)
{
	return std::stof(parameters[0]);
}

