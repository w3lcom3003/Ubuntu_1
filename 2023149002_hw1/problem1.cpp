#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/**********************/
/*******Problem 1******/
/**********************/
/* ID:      2023149002*/
/* NAME:  RYU SEUNGMIN*/
/**********************/


// Define a function to obtain a square value
double sqrt(int a, int b)
{
	// Use for llop to obtain a square value
	int tmp = 1;
	for (int i = 0; i < b; i++)
	{
		tmp *= a;
	}
	return tmp;
}

int main() {
	int loopNum;

	ofstream outfile;
	outfile.open("output1.txt");

	cout << "Enter the number of interations for the loop: ";
	cin >> loopNum;

	for (int i = 0; i < loopNum; i++) {
		int a, b, c;
		int x0, x1;
		cout << "Enter the coefficients of the equation [y = ax^2 + bx + c]" << endl;
		cout << "a: "; cin >> a;
		cout << "b: "; cin >> b;
		cout << "c: "; cin >> c;
		cout << "Enter the value of x0 and x1" << endl;
		cout << "x0: "; cin >> x0;
		cout << "x1: "; cin >> x1;

		// To fix the precision of floating numbers
		outfile << setprecision(3) << fixed;

		// Integrate directly and substitute each value of x
		double result_x1 = a * (1.0 / 3) * sqrt(x1, 3) + b * (1.0 / 2) * sqrt(x1, 2) + c * x1;
		double result_x0 = a * (1.0 / 3) * sqrt(x0, 3) + b * (1.0 / 2) * sqrt(x0, 2) + c * x0;
		// Subtract each value and find the desired partial integral
		outfile << (result_x1 - result_x0) << "\n";

	}

	outfile.close();

	return 0;
}
