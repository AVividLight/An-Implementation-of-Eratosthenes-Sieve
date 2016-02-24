#include "calculateprimes.h"

void CalculatePrimes::CalculateSmallerPrimes (int parentInt, std::vector<int>& smallerPrimes)
{

	if (parentInt > 1)
	{

		/* Thanks to Abhinav Priyadarshi! */
		bool primes[parentInt];
		memset(primes, true, sizeof(primes));

		int index = 2;
		while ( index * index < parentInt)
		{

			if (primes[index] == true)
			{

				int count = index * 2;
				while (count <= parentInt)
				{

					primes[count] = false;
					count += index;
				}
			}

			index += 1;
		}

		int printPrimesIndex = 2;
		while (printPrimesIndex <= parentInt)
		{

			if (primes[printPrimesIndex] == true)
			{

				smallerPrimes.push_back(printPrimesIndex);
			}

			printPrimesIndex += 1;
		}
	}
}
