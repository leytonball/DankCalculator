#include "numberSequences.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <string>
using namespace std;

numberSequences::numberSequences()
{
}


numberSequences::~numberSequences()
{
}

string numberSequences::cubic(int x, int x2, int x3, int real, int start, int step, int end, string adder, string final) {



	for (int i = start; i <= end; i += step) {


		final = to_string((x3 * i * i * i) + (x2 * i * i) + (x *i) + real);

		cout << i << "                   " << final << endl;

	}
	return " ";
}

string numberSequences::linear(int x, int real, int start, int step, int end, string adder, string final) {



	for (int i = start; i <= end; i += step) {


		final = to_string(((x *i) + real));

		cout << i << "                   " << final << endl;

	}
	return " ";
}

string numberSequences::quadratics(int x, int x2, int real, int start, int step, int end, string adder, string final) {



	for (int i = start; i <= end; i += step) {


		final = to_string((x2 * i * i) + (x *i) + real);

		cout << i << "                   " << final << endl;

	}
	return " ";
}
