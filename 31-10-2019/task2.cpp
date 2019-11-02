#include <iostream>

using namespace std;

int main()
{
	// solution to task 2
	int a, first = 1, second = 1, temp;
	cout << "A= "; cin >> a;
	if (a == 1 || a == 0)
	{
		cout << "fib(n) = 1";
	}
	for (int i = 1; i < a; i++)
	{
		temp = first + second;
		first = second;
		second = temp;
	}
	cout << "fib(n)= " << second;
	return 0;
}