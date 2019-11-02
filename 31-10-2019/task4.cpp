#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "broi niva= ";
	cin >> n;
	int numberOfSpaces = n - 1;

	// first we output the first n-1 rows because they are similar, they start with a space
	// then they have a Star(*) then they have a number of spaces equal to (i-1) * 2 - 1
	// then they end with a Star(*)
	for (int i = 1; i < n; i++)
	{

		for (int j = 0; j < numberOfSpaces; j++)
		{
			cout << " ";
		}

		std::cout << "*";
		if (i != 1)
		{
			for (int j = (i - 1) * 2 - 1 ; j > 0; --j)
				std::cout << " ";

			std::cout << "*";
		}

		--numberOfSpaces;
		cout << endl;
	}

	for (int i = 0; i < n; ++i)
		std::cout << "* ";

	std::cout << std::endl;

	return 0;
}