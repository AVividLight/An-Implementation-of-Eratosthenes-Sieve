#include "terminalinputoutput.h"

using namespace std;

TerminalInputOutput::TerminalInputOutput()
{

	string inputString = "";
	int inputNumber = 0.0;
	vector<int> smallerPrimes = {};

	cout << endl << "Enter a number: ";
	getline (cin, inputString);

	inputNumber = stof(inputString);

	CalculatePrimes calculatorFunction;
	calculatorFunction.CalculateSmallerPrimes(inputNumber, smallerPrimes);

	cout << "All primes in " << inputString << endl;

	int makeNewLine = 0;
	for (int i : smallerPrimes)
	{

		cout << i << " ";
		if (makeNewLine == 9)
		{

			cout << endl;
			makeNewLine = -1;
		}

		makeNewLine += 1;
	}

	cout << endl;
}
