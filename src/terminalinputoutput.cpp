#include "terminalinputoutput.h"

using namespace std;

TerminalInputOutput::TerminalInputOutput()
{

	string inputString = "";
	int inputNumber = 0;
	vector<int> smallerPrimes;

	cout << endl << "Enter a number: ";
	cin >> inputNumber; // Delete if C++11 is available

	//getline (cin, inputString); // Uncomment if C++11 is available
	//inputNumber = stof(inputString); // Uncomment if C++11 is available

	CalculatePrimes calculatorFunction;
	calculatorFunction.CalculateSmallerPrimes(inputNumber, smallerPrimes);

	cout << "All primes in " << inputString << endl;

	int makeNewLine = 0;
	//for (int i : smallerPrimes) // Uncomment if C++11 is available
	int i = 0; // Delete if C++11 is available
	while (i < smallerPrimes.size ()) // Delete if C++11 is available
	{

		//cout << i << " "; // Uncomment if C++11 is available
		cout << smallerPrimes[i] << " "; // Delete if C++11 is available
		if (makeNewLine == 9)
		{

			cout << endl;
			makeNewLine = -1;
		}

		makeNewLine += 1;
		i += 1; // Delete if C++11 is available
	}

	cout << endl;
}
