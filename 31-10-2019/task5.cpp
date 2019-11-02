#include <iostream>

using namespace std;

int main()
{
	int n, previousNumber;
	std::cin >> n;
	bool isTrionShaped = true;
	// for a number sequence to be trion shaped
	// the following rules apply the i-th indexed number in the sequence 
	// needs to be bigger than the i-1 indexed number if i is odd 
	// or if i is even the i-th number needs to be smaller than the (i-1)th number

	for (int i = 0; i < n; ++i)
	{
		int currentNumber;
		std::cin >> currentNumber;

		if (i != 0)
		{
			// if index is even
			// and the previous number is not bigger than the current one
			// then the sequence isn't trion shaped
			if (i % 2 == 0)
			{
				if(previousNumber < currentNumber)
					isTrionShaped = false;
			}
			else
			{
				if (previousNumber > currentNumber)
					isTrionShaped = false;
			}
		}
		previousNumber = currentNumber;
	}

	std::cout << (isTrionShaped ? "The sequence is trion shaped" : "The sequence isn't trion shaped") << std::endl;

	return 0;

}