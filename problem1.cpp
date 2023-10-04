#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/**********************/
/*******Problem 1******/
/**********************/
/* ID:                */
/* NAME:              */
/**********************/

double sqrt(int a, int b)
{
	int tmp=1;
	for (int i = 0; i < b; i++)
	{
		tmp *= a;
	}
	return tmp;
}

int main(){
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

		double result_x1 = a * (1 / 3) * sqrt(x1, 3) + b * (1 / 2) * sqrt(x1, 2) + c * x1;
		double result_x0 = a * (1 / 3) * sqrt(x0, 3) + b * (1 / 2) * sqrt(x0, 2) + c * x0;
		outfile << (result_x1 - result_x0)\n;
		
	}

	outfile.close();

	return 0;
}
