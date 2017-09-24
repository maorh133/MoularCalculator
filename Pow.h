#pragma once
#include "calculatorOperation.h"
class Pow : public calculatorOperation
{
public:
	virtual bool supportsOperation(std::string op_string);
	virtual int requiredParameters();
	virtual double calcResult(double currVal, std::vector<std::string> parameters);
	Pow();
	~Pow();
};

