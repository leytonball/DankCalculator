#include "numberSystems.h"
#include <math.h>
#include <stdio.h>
#include <cmath>
using namespace std;

numberSystems::numberSystems()
{
}


numberSystems::~numberSystems()
{
}

string numberSystems::decToBi(double firstNumber) {
	bool c = true;
	int x = 0;
	string bi = " ";
	while (c == true) {//Calculate number of binary digits needed by using powers of 2
		x += 1;
		if (firstNumber < pow(2, x)) {
			c = false;
		}

	}
	for (int i = x - 1; i > -1; i--) {
		if ((firstNumber - (pow(2, i) - 1) >= 1)) {
			firstNumber -= (pow(2, i));
			bi = bi + "1";
		}
		else {
			bi = bi + "0";
		}
	}
	return bi;

}
string numberSystems::decToOct(double firstNumber) {
	bool c = true;
	int x = 0;
	string oct = " ";
	while (c == true) {
		x += 1;
		if (firstNumber < pow(8, x)) { //Calculate number of octal digits needed by using powers of 8
			c = false;
		}

	}
	int count;
	firstNumber += 1;
	for (int i = x - 1; i >= 0; i--) {
		count = 0;
		while (firstNumber > 0) {
			firstNumber -= pow(8, i);
			count += 1;
		}
		firstNumber += pow(8, i);
		count -= 1;
		string s = to_string(count);
		oct = oct + s;

	}
	return oct;

}
string numberSystems::decToHex(double firstNumber) {
	bool c = true;
	int x = 0;
	string hex = " ";
	while (c == true) {
		x += 1;
		if (firstNumber < pow(16, x)) { //Calculate number of hexadecimal digits needed by using powers of 8
			c = false;
		}

	}
	int count;
	firstNumber += 1;
	string s;
	for (int i = x - 1; i >= 0; i--) {
		count = 0;
		while (firstNumber > 0) {
			firstNumber -= pow(16, i);
			count += 1;
		}
		firstNumber += pow(16, i);
		count -= 1;
		if (count < 10) {
			s = to_string(count);
		}
		else if (count == 10) {
			s = "A";
		}
		else if (count == 11) {
			s = "B";
		}
		else if (count == 12) {
			s = "C";
		}
		else if (count == 13) {
			s = "D";
		}
		else if (count == 14) {
			s = "E";
		}
		else if (count == 15) {
			s = "F";
		}
		hex = hex + s;

	}
	return hex;

}
int numberSystems::getFac(int firstNumber) {
	int sum = 1;
	for (int i = firstNumber; i > 0; i--) {
		sum *= i;
	}
	return sum;
}