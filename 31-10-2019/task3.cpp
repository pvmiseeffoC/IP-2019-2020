#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "broi niva= ";
	cin >> n;
	int numberOfStars = 1;
	int numberOfSpaces = n - 1;

	for (int i = 1; i <= n; i++)
	{

		for (int j = 0; j <= numberOfSpaces; j++)
		{
			cout << " ";
		}

		for (int j = 1; j <= numberOfStars; j++)
		{
			cout << "*";
		}
		numberOfStars = numberOfStars + 2;
		--numberOfSpaces;
		cout << endl;
	}

	numberOfSpaces = n;

	for (int j = 1; j <= numberOfSpaces; j++)
	{
		cout << " ";
	}

	cout << "*";

	return 0;
}