#include <iostream>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/**********************/
/*******Problem 2******/
/**********************/
/* ID:      2023149002*/
/* NAME:  RYU SEUNGMIN*/
/**********************/

int main() {
	int loopNum;

	ifstream infile("input2.txt");

	infile >> loopNum;
	for (int i = 0; i < loopNum; i++) {
		int a_x, a_y;
		int b_x, b_y;
		int c_x, c_y;
		infile >> a_x >> a_y;
		infile >> b_x >> b_y;
		infile >> c_x >> c_y;

		int moveNum;
		infile >> moveNum;

		for (int j = 0; j < moveNum; ++j) {
			char target;
			char dir;
			infile >> target >> dir;

			// If target is 'a'
			if (target == 'a')
			{
				// Increase or decrease the x and y values by 1
				// depending on the input direction
				if (dir == 'h')
				{
					a_x -= 1;
				}
				else if (dir == 'l')
				{
					a_x += 1;
				}
				else if (dir == 'j')
				{
					a_y -= 1;
				}
				else if (dir == 'k')
				{
					a_y += 1;
				}
				else
				{
					// If direction is wrong, print error message
					// by using loop variable
					cout << "Wrong movement in iteration " << i << ", movement " << j<<endl;
				}
			}
			// If target is 'b'
			else if (target == 'b')
			{
				// Increase or decrease the x and y values by 1
				// depending on the input direction
				if (dir == 'h')
				{
					b_x -= 1;
				}
				else if (dir == 'l')
				{
					b_x += 1;
				}
				else if (dir == 'j')
				{
					b_y -= 1;
				}
				else if (dir == 'k')
				{
					b_y += 1;
				}
				else
				{
					// If direction is wrong, print error message
					// by using loop variable
					cout << "Wrong movement in iteration " << i << ", movement " << j<<endl;
				}
			}
			// If target is 'c'
			else if (target == 'c')
			{
				// Increase or decrease the x and y values by 1
				// depending on the input direction
				if (dir == 'h')
				{
					c_x -= 1;
				}
				else if (dir == 'l')
				{
					c_x += 1;
				}
				else if (dir == 'j')
				{
					c_y -= 1;
				}
				else if (dir == 'k')
				{
					c_y += 1;
				}
				else
				{
					// If direction is wrong, print error message
					// by using loop variable
					cout << "Wrong movement in iteration " << i << ", movement " << j<<endl;
				}
			}
			else
			{
				// If target is wrong, print error message
				// by using loop variable
				cout << "Wrong movement in iteration " << i << ", movement " << j<<endl;
			}
		}

		cout << "Position of A: (" << a_x << ", " << a_y << ")" << endl;
		cout << "Position of B: (" << b_x << ", " << b_y << ")" << endl;
		cout << "Position of C: (" << c_x << ", " << c_y << ")" << endl;

	}

	infile.close();

	return 0;
}

