// 12-12-2019.cpp : Defines the entry point for the application.
//
#include <iostream>
#include <algorithm>

using namespace std;

enum class Direction
{
    Left,
    Right,
    Up,
    Down
};


const int MAX_SIZE = 256;
// accepts only square matrices
void printSpiral(int matrix[MAX_SIZE][MAX_SIZE], int n)
{
    int elementsToPrint = n;
    int row = 0; int col = 0; // start from top-left corner
    Direction direction = Direction::Right;
    while (elementsToPrint)
    {
        if (direction == Direction::Right)
        {
            for (int i = 0; i < elementsToPrint; ++i)
            {
                std::cout << matrix[row][col] << " ";
                ++col;
            }
            --elementsToPrint;
            --col;
            ++row;
            direction = Direction::Down;
        }
        else if (direction == Direction::Left)
        {
            for (int i = 0; i < elementsToPrint; ++i)
            {
                std::cout << matrix[row][col] << " ";
                --col;
            }
            --elementsToPrint;
            --row;
            ++col;
            direction = Direction::Up;
        }
        else if (direction == Direction::Up)
        {
            for (int i = 0; i < elementsToPrint; ++i)
            {
                std::cout << matrix[row][col] << " ";
                --row;
            }
            ++col;
            ++row;
            direction = Direction::Right;
        }
        else
        {
            // direction == Direction::Down
            for (int i = 0; i < elementsToPrint; ++i)
            {
                std::cout << matrix[row][col] << " ";
                ++row;
            }
            --col;
            --row;
            direction = Direction::Left;
        }
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

    auto mymatrix = matrix;
    printSpiral(mymatrix, n);

	return 0;
}
