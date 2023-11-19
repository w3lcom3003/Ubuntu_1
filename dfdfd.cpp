/*!
 *
 * \file problem1.cpp
 * \brief Implement Collatz Conjecture
 *
 * Collatz Conjecture
 *
 * Calculate the Collatz algorithm,
 * and print the calculation process.
 *
 * In the input file, the first row is the number of iterations.
 * Starting from the second row, each line represents the number N to be calculated.
 *
 * The output file must contain the numbers from the calculation process.
 *
 * It is recommended that you write your own code on the lines provided,
 * but you are free to do so by modifying the skeleton code.
 */

#include <iostream>
#include <fstream>
#include <string>
 //---------------------------------------------------------------------------
using namespace std;
//---------------------------------------------------------------------------
const string InputFilePath = "input1.txt";
const string OutputFilePath = "output1.txt";
//---------------------------------------------------------------------------

int main(void)
{
    ifstream Ifs{ InputFilePath };
    if (Ifs.fail()) {
        cerr << "Failed to open input file\n";
        return 0;
    }
    ofstream Ofs{ OutputFilePath };

    int count;
    Ifs >> count;

    for (int i = 0; i < count; ++i) {
        int startNumber;
        Ifs >> startNumber;
        Ofs << startNumber << endl;
        while (startNumber != 1)
        {
            if (startNumber % 2 == 0)
            {
                startNumber = startNumber / 2;
                Ofs << startNumber << endl;
            }
            else
            {
                startNumber = (3 * startNumber) + 1;
                Ofs << startNumber << endl;
            }
        }
    }

    Ifs.close();
    Ofs.close();

    return 0;
}
//---------------------------------------------------------------------------