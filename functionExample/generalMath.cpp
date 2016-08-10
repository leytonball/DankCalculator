#include "generalMath.h"
#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <cmath>

generalMath::generalMath()
{

}


generalMath::~generalMath()
{

}

double PI = 3.14159265359;

double generalMath::addTwoNumbers(double firstNumber, double secondNumber) {
	firstNumber = firstNumber + secondNumber;
	return firstNumber;
}
double generalMath::subTwoNumbers(double firstNumber, double secondNumber) {
	firstNumber = firstNumber - secondNumber;
	return firstNumber;
}
double generalMath::mulTwoNumbers(double firstNumber, double secondNumber) {
	firstNumber = firstNumber * secondNumber;
	return firstNumber;
}
double generalMath::divTwoNumbers(double firstNumber, double secondNumber) {
	firstNumber = firstNumber / secondNumber;
	return firstNumber;
}
double generalMath::powTwoNumbers(double firstNumber, double secondNumber) {
	firstNumber = pow(firstNumber, secondNumber);
	return firstNumber;
}

double generalMath::getSin(double firstNumber) {
	
	return sin(firstNumber*(PI/180));

}
double generalMath::getCos(double firstNumber) {

	return cos(firstNumber*(PI / 180));

}
double generalMath::getTan(double firstNumber) {

	return tan(firstNumber*(PI / 180));

}
int generalMath::modulus(int firstNumber1, int secondNumber1) {

	return (firstNumber1%secondNumber1);
}
