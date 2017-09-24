#pragma once
#include <stdlib.h>
#include <string>
#include <vector>
class calculatorOperation
{
public:
	//calculatorOperation();
	//~calculatorOperation();

	virtual bool supportsOperation(std::string op_string) = 0;
	virtual int requiredParameters() = 0;
	virtual double calcResult(double currVal, std::vector<std::string> parameters) = 0;
};

