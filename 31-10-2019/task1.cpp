#include <iostream>
#include <string>


int main()
{
    // one way to solve task 1 :
	int a, b;
	std::cout << "A= "; std::cin >> a;
	std::cout << "B= "; std::cin >> b;
	for (int i = a; i <= b; i++)
	{
		switch (i)
		{
		case 0: std::cout << "zero" << std::endl; break;
		case 1: std::cout << "one" << std::endl; break;
		case 2: std::cout << "two" << std::endl; break;
		case 3: std::cout << "three" << std::endl; break;
		case 4: std::cout << "four" << std::endl; break;
		case 5: std::cout << "five" << std::endl; break;
		case 6: std::cout << "six" << std::endl; break;
		case 7: std::cout << "seven" << std::endl; break;
		case 8: std::cout << "eight" << std::endl; break;
		case 9: std::cout << "nine" << std::endl; break;
		default:
			if (i % 2 == 0)
			{
				std::cout << "Even" << std::endl;
			}
			else
			{
				std::cout << "Odd" << std::endl;
			}
		}
	}

	// another way to solve task 1 , std::string is an array of multiple chars 
	// you can google std::string and read more about it in cppreference
	/*std::string numbers[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	for (int i = a; i <= b; ++i)
	{
		if (i >= 0 && i <= 9)
			std::cout << numbers[i] << std::endl;
		else
			std::cout << (i % 2 == 0 ? "Even" : "Odd") << std::endl;
	}*/

	return 0;
}