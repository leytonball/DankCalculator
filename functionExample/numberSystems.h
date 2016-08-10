#ifndef NUMBERSYSTEMS_H_
#define NUMBERSYSTEMS_H_

#include <string>

class numberSystems
{
public:

	numberSystems();
	~numberSystems();

	std::string decToBi(double firstNumber);
	std::string decToOct(double firstNumber);
	std::string decToHex(double firstNumber);
	int getFac(int firstNumber);
};

#endif