#include <iostream>
#include <algorithm>
const int MAX_SIZE = 256;

//accepts square matrix
void diagonal_print(int matrix[MAX_SIZE][MAX_SIZE], int size)
{
    int row = 0; int col = size - 1; // start from top right corner

    int elementsToPrint = 1;
    
    while (elementsToPrint <= size)
    {
        for (int i = 0; i < elementsToPrint; ++i)
            std::cout << matrix[row - i][col - i] << " ";
        ++row;
        ++elementsToPrint;
    }

    row = size - 1; col = size - 2;

    elementsToPrint = size - 1;
    while (elementsToPrint)
    {
        for (int i = 0; i < elementsToPrint; ++i)
            std::cout << matrix[row - i][col - i] << " ";
        --col;
        --elementsToPrint;
    }
}

int main()
{
    int matrix[MAX_SIZE][MAX_SIZE];
    int n = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            std::cin >> matrix[i][j];

    diagonal_print(matrix, n);
    return 0;
}