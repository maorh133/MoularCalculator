#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"
#include "Sqrt.h"
#include "Pow.h"
#include "SetValue.h"
#define SECCESS 0


std::string getOperationName(std::string data)
{

	std::string operation = "";
	for each (char ch in data)
	{
		if (ch != ' ')
			operation += ch;
		else
			return operation;
	}
	return operation;
}
calculatorOperation* getOperation(std::string data, std::vector<calculatorOperation*> calculatorOperations)
{
	std::string operationName = getOperationName(data);
	for each (calculatorOperation* operation in calculatorOperations)
	{
		if (operation->supportsOperation(operationName))
			return operation;
	}
	return nullptr;
}

std::vector<std::string> getParams(std::string data)
{
	std::vector<std::string> params;
	std::string param = "";
	for each (char ch in data)
	{
		if (ch != ' ')
		{
			param += ch;
		}
		else if ((param[0] >= '0' && param[0] <= '9') || param[0] == '-')  // param is a number (to not include the operationName).
		{
			params.push_back(param);
			param = "";
		}
		else
		{
			param = "";
		}
	}
	if (param != "")
	{
		params.push_back(param); //for the last param (no space in the end).
	}
	return params;
}


int main(void)
{
	std::vector<calculatorOperation*> calculatorOperations;
	std::vector<std::string> params;
	calculatorOperations.push_back(new Addition());
	calculatorOperations.push_back(new Subtraction());
	calculatorOperations.push_back(new Multiplication());
	calculatorOperations.push_back(new Division());
	calculatorOperations.push_back(new Sqrt());
	calculatorOperations.push_back(new Pow());
	calculatorOperations.push_back(new SetValue());
	float value = 0;
	std::string data;
	std::string paramsString;
	bool getFirstStr = false;

	std::cout << "Welcome to the modular calculator" << std::endl;
	while (true)
	{
		std::cout << ">>> ";
		std::getline(std::cin, data);

		calculatorOperation* operation = getOperation(data, calculatorOperations);

		paramsString = "";
		getFirstStr = false;
		for each (char ch in data)
		{
			if (ch == ' ' && !getFirstStr)
				getFirstStr = true;
			else if (getFirstStr)
				paramsString += ch;
		}
		params = getParams(paramsString);
		if (operation != nullptr &&  operation->requiredParameters() == params.size())
		{
			value = operation->calcResult(value, params);
		}
		else
		{
			std::cout << "An error was occurred." << std::endl;
		}
		std::cout << "Current value is: " << value << std::endl;
	}
	system("PAUSE");
	return SECCESS;
}
