#include <iostream>

using namespace std;

int main()
{
	// convert from decimal to binary

	int n;
	std::cin >> n;
	int count = 0;
	// create character array to hold the values
	bool binary_representation[sizeof(int) * 8];
	// this can be changed to
	// std::bitset<sizeof(int) * 8>
	while (n != 0)
	{
		int i = n % 2;
		binary_representation[count] = i;
		++count;
		n /= 2;
	}

	for (int i = count - 1; i >= 0; --i)
	{
		std::cout << binary_representation[i];
	}

}