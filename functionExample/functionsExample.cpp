#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include "generalMath.h"
#include "numberSystems.h"
using namespace std;

int modulus(int firstNumber1, int secondNumber1) {
	
	return (firstNumber1%secondNumber1);
}
double DegreesToRadians(double firstNumber)
{
	double PI = 3.14159265359;
	return firstNumber * PI / 180;
}




	int main() {
		int decision;
		double matrixVal[4];
		double matrix2Val[4];
		double matTotal[4];
		cout << "hello wrld" << endl;
		double multiTotal[4];
		double determinant;
		double inverseVal[4];
		int c = 0;
		string op1 = "";
		string op2 = "12";
		
		generalMath generalMath;
		numberSystems number_systems;
		cout << "Welcome to the dankest calculator of all time type quit or exit to terminate the program " << endl;
		
		while (op1 != "5") {

			double firstNumber = 0;
			double secondNumber = 0;
			int firstNumber1 = 1;
			int secondNumber1 = 1;
			cout << endl;

			


			if (op2 == "12" ) {
				cout << "The modes available include:" << endl;
				cout << "1. Mode 1 - General Calculations" << endl;
				cout << "2. Mode 2 - Calculations involving specific number systems" << endl;
				cout << "3. Mode 3 - Matrix calculations" << endl;
				cout << "4. Mode 4 - Number sequences" << endl;
				cout << "5. Terminate the dank calculator" << endl;
				cout << endl;
				cin >> op1;
				op2 = "";
				
			}
			else {
				if (op1 == "1") {

					cout << "1.Addition" << endl;
					cout << "2.Subtraction" << endl;
					cout << "3.Multiplication" << endl;
					cout << "4.Division" << endl;
					cout << "5.Square root" << endl;
					cout << "6.Cube root" << endl;
					cout << "7.To the power of" << endl;
					cout << "8.Modulus aka Remainders" << endl;
					cout << "9.Sin" << endl;
					cout << "10Cosine" << endl;
					cout << "11.Tangen0" << endl;
					cout << "12.Change the mode" << endl;
					cout << endl;
					cin >> op2;
					
					if (op2 == "1") {
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber;
						cout << endl;
						cout << "Enter a second number" << endl;
						cout << endl;
						cin >> secondNumber;
						cout << endl;
						cout << "Your answer is " << generalMath.addTwoNumbers(firstNumber, secondNumber);

					}
					else if (op2 == "2") {
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber;
						cout << endl;
						cout << "Enter a second number" << endl;
						cout << endl;
						cin >> secondNumber;
						cout << endl;
						cout << "Your answer is " << generalMath.subTwoNumbers(firstNumber, secondNumber);
					}
					else if (op2 == "3") {
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber;
						cout << endl;
						cout << "Enter a second number" << endl;
						cout << endl;
						cin >> secondNumber;
						cout << endl;
						cout << "Your answer is " << generalMath.mulTwoNumbers(firstNumber, secondNumber);
					}
					else if (op2 == "4") {
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber;
						cout << endl;
						cout << "Enter a second number" << endl;
						cout << endl;
						cin >> secondNumber;
						while (secondNumber == 0) {
							cout << endl;
							cout << "You cannot divide by zero thats too op" << endl;
							cout << endl;
							cout << "Enter a second number" << endl;
							cout << endl;
							cin >> secondNumber;
						}
						cout << endl;
						cout << "Your answer is " << generalMath.divTwoNumbers(firstNumber, secondNumber) << endl;
					}

					else if (op2 == "5") {
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber;
						cout << endl;
						cout << "Your answer is " << sqrt(firstNumber) << endl;
					}
					else if (op2 == "6") {
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber;
						cout << endl;
						cout << "Your answer is " << cbrt(firstNumber) << endl;
					}

					else if (op2 == "7") {
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber;
						cout << endl;
						cout << "Enter a second number" << endl;
						cout << endl;
						cin >> secondNumber;
						cout << endl;
						cout << "Your answer is " << generalMath.powTwoNumbers(firstNumber, secondNumber);

					}
					if (op2 == "8") {
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber1;
						cout << endl;
						cout << "Enter another number" << endl;
						cout << endl;
						cin >> secondNumber1;
						cout << endl;
						cout << "Your answer is " << generalMath.modulus(firstNumber1, secondNumber1) << endl;
					}
					else if (op2 == "9") {
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber;
						cout << endl;
						cout << "Your answer is " << generalMath.getSin(firstNumber) << endl;
					}
					else if (op2 == "10") {
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber;
						cout << endl;
						cout << "Your answer is " << generalMath.getCos(firstNumber) << endl;
					}
					else if (op2 == "11") {
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber;
						cout << endl;
						cout << "Your answer is " << generalMath.getTan(firstNumber) << endl;
					}
					else if (op2 == "12") {

					}
				}
				else if (op1 == "2") {

					cout << "1.Decimal to binary" << endl;
					cout << "2.Decimal to octal" << endl;
					cout << "3.Decimal to hex" << endl;
					cout << "4.Factorial of a number" << endl;
					cout << "5.Change to a different mode" << endl;
					cout << endl;
					cin >> op2;
					
					 if (op2 == "1") {
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber;
						cout << endl;
						cout << "Your answer is " << number_systems.decToBi(firstNumber) << endl;
					}
					else if (op2 == "2") {
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber;
						cout << endl;
						cout << "Your answer is " << number_systems.decToOct(firstNumber) << endl;
					}
					else if (op2 == "3") {
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber;
						cout << endl;
						cout << "Your answer is " << number_systems.decToHex(firstNumber) << endl;
					}
					else if (op2 == "4") {
						int firstNumber = 0;
						cout << endl;
						cout << "Enter a number" << endl;
						cout << endl;
						cin >> firstNumber;
						cout << endl;
						cout << "Your answer is " << number_systems.getFac(firstNumber) << endl;
					}
					else if (op2 == "5") {
						op2 = "12";
					}
					else {
						cout << endl;
						cout << "#!# 420 ERROR #!# Please enter a valid operation" << endl;
					}
				}
				else if (op1 == "3") {
					cout <<"Enter the number of the function you would like to perform " << endl << "1. matrix addition" << endl << "2. matrix subtraction" << endl << "3. matrix multiplication" << endl << "4. finding the determinant" << endl << "5. finding the inverse" << endl << "6. quit" << endl;
					cin >> decision;

					while (decision != 7) {

						
						if (decision == 1) {

							cout << "enter the numbers from left to right, from up to down" << endl;

							for (int i = 0; i < 4; i++) { //matrix 1

								cout << "enter number " << i + 1 << endl;
								cin >> matrixVal[i];
							}
							cout << "matrix 1" << endl;

							cout << "| " << matrixVal[0] << "             " << matrixVal[1] << "    |" << endl;
							cout << "| " << matrixVal[2] << "             " << matrixVal[3] << "    |" << endl;

							cout << "enter the numbers from left to right, from up to down" << endl;

							for (int i = 0; i < 4; i++) { // matrix 2

								cout << "enter number " << i + 1 << endl;
								cin >> matrix2Val[i];
							}
							cout << "matrix 2" << endl;

							cout << "| " << matrix2Val[0] << "             " << matrix2Val[1] << "    |" << endl;
							cout << "| " << matrix2Val[2] << "             " << matrix2Val[3] << "    |" << endl;

							for (int i = 0; i < 4; i++) {

								matTotal[i] = matrixVal[i] + matrix2Val[i];

							}

							cout << "the sum is" << endl; //answer

							cout << "| " << matTotal[0] << "             " << matTotal[1] << "    |" << endl;
							cout << "| " << matTotal[2] << "             " << matTotal[3] << "    |" << endl;



							decision = 0;

						}

						else if (decision == 2) {

							cout << "enter the numbers from left to right, from up to down" << endl;

							for (int i = 0; i < 4; i++) { //matrix 1

								cout << "enter number " << i + 1 << endl;
								cin >> matrixVal[i];
							}
							cout << "matrix 1" << endl;

							cout << "| " << matrixVal[0] << "             " << matrixVal[1] << "    |" << endl;
							cout << "| " << matrixVal[2] << "             " << matrixVal[3] << "    |" << endl;

							cout << "enter the numbers from left to right, from up to down" << endl;

							for (int i = 0; i < 4; i++) { // matrix 2

								cout << "enter number " << i + 1 << endl;
								cin >> matrix2Val[i];
							}
							cout << "matrix 2" << endl;

							cout << "| " << matrix2Val[0] << "             " << matrix2Val[1] << "    |" << endl;
							cout << "| " << matrix2Val[2] << "             " << matrix2Val[3] << "    |" << endl;

							for (int i = 0; i < 4; i++) {

								matTotal[i] = matrixVal[i] - matrix2Val[i];

							}

							cout << "the sum is" << endl; //answer

							cout << "| " << matTotal[0] << "             " << matTotal[1] << "    |" << endl;
							cout << "| " << matTotal[2] << "             " << matTotal[3] << "    |" << endl;

							decision = 0;

						}

						else if (decision == 3) {

							cout << "enter the numbers from left to right, from up to down" << endl;

							for (int i = 0; i < 4; i++) { //matrix 1

								cout << "enter number " << i + 1 << endl;
								cin >> matrixVal[i];
							}
							cout << "matrix 1" << endl;

							cout << "| " << matrixVal[0] << "             " << matrixVal[1] << "    |" << endl;
							cout << "| " << matrixVal[2] << "             " << matrixVal[3] << "    |" << endl;

							cout << "enter the numbers from left to right, from up to down" << endl;

							for (int i = 0; i < 4; i++) { // matrix 2

								cout << "enter number " << i + 1 << endl;
								cin >> matrix2Val[i];
							}
							cout << "matrix 2" << endl;

							cout << "| " << matrix2Val[0] << "             " << matrix2Val[1] << "    |" << endl;
							cout << "| " << matrix2Val[2] << "             " << matrix2Val[3] << "    |" << endl;


							multiTotal[0] = (matrixVal[0] * matrix2Val[0]) + (matrixVal[1] * matrix2Val[2]);
							multiTotal[1] = (matrixVal[0] * matrix2Val[1]) + (matrixVal[1] * matrix2Val[3]);
							multiTotal[2] = (matrixVal[2] * matrix2Val[0]) + (matrixVal[3] * matrix2Val[2]);
							multiTotal[3] = (matrixVal[3] * matrix2Val[1]) + (matrixVal[3] * matrix2Val[3]);

							cout << "the answer is " << endl;

							cout << "| " << multiTotal[0] << "             " << multiTotal[1] << "    |" << endl;
							cout << "| " << multiTotal[2] << "             " << multiTotal[3] << "    |" << endl;

							decision = 0;

						}

						else if (decision == 4) {

							cout << "enter the numbers from left to right, from up to down" << endl;

							for (int i = 0; i < 4; i++) { //matrix 1

								cout << "enter number " << i + 1 << endl;
								cin >> matrixVal[i];
							}
							cout << "matrix 1" << endl;

							cout << "| " << matrixVal[0] << "             " << matrixVal[1] << "    |" << endl;
							cout << "| " << matrixVal[2] << "             " << matrixVal[3] << "    |" << endl;

							cout << "enter the numbers from left to right, from up to down" << endl;

							determinant = (matrixVal[0] * matrixVal[3]) - (matrixVal[1] * matrixVal[2]);

							cout << "the determinant is " << determinant << endl;

							decision = 7;

						}

						else if (decision == 5) {

							cout << "enter the numbers from left to right, from up to down" << endl;

							for (int i = 0; i < 4; i++) { //matrix 1

								cout << "enter number " << i + 1 << endl;
								cin >> matrixVal[i];
							}
							cout << "matrix 1" << endl;

							cout << "| " << matrixVal[0] << "             " << matrixVal[1] << "    |" << endl;
							cout << "| " << matrixVal[2] << "             " << matrixVal[3] << "    |" << endl;

							cout << "enter the numbers from left to right, from up to down" << endl;

							determinant = (matrixVal[0] * matrixVal[3]) - (matrixVal[1] * matrixVal[2]);

							cout << "the determinant is " << determinant << endl;

							for (int i = 0; i < 4; i++) {

								inverseVal[i] = matrixVal[i] / determinant;

							}

							cout << "the inverse is" << endl;

							cout << "| " << inverseVal[3] << "             " << -inverseVal[1] << "    |" << endl;
							cout << "| " << -inverseVal[2] << "             " << inverseVal[0] << "    |" << endl;

							decision = 0;
							cout << endl;
						}
						else if (decision == 6) {
							cout << endl;
							
							op2 = "12";
							decision = 7;
						}
					}
				}						
			}
		}	
	}