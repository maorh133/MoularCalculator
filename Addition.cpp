#include "Addition.h"

Addition::Addition()
{
}


Addition::~Addition()
{
}

bool Addition::supportsOperation(std::string op_string)
{
	return std::strcmp(op_string.c_str(), "add") == 0 || std::strcmp(op_string.c_str(), "+") == 0;
}

int Addition::requiredParameters()
{
	return 1;
}

double Addition::calcResult(double currVal, std::vector<std::string> parameters)
{

	return currVal +std::stof(parameters[0]);
}
