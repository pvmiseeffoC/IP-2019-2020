#include <algorithm>
#include <iostream>


const int MAX_SIZE = 256;
void printUnique(int array[MAX_SIZE], int size)
{
    for (int i = 0; i < size; ++i)
    {
        int count = 0;
        for (int j = 0; j < size; ++j)
            count += (array[i] == array[j]);
        if (count == 1)
            std::cout << array[i] << " "; // you can also save them in another array and then print them
    }
}
int main()
{
    int array[MAX_SIZE];
    int n = 0; 
    std::cin >> n;
    for (int i = 0; i < n; ++i)
        std::cin >> array[i];
    printUnique(array, n);
    return 0;
}