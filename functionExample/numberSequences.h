#pragma once
#include <string>
using namespace std;
class numberSequences
{
public:
	numberSequences();
	~numberSequences();

	string cubic(int x, int x2, int x3, int real, int start, int step, int end, string adder, string final);
	string linear(int x, int real, int start, int step, int end, string adder, string final);
	string quadratics(int x, int x2, int real, int start, int step, int end, string adder, string final);
};



