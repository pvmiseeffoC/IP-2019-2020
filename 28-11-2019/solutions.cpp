// 28-11-2019.cpp : Defines the entry point for the application.
//

#include <iostream>
#include <limits>

using namespace std;

void print(int* array, int size) {
  for (int i = 0; i < size; ++i)
    std::cout << array[i] << " ";
  std::cout << std::endl;
}

int* createArray(int n) {
  int* array =
      new int[n];  // allocates memory for n integers, when we have finished
                   // using this we must call -> delete[] array;
  for (int i = 0; i < n; ++i)
    std::cin >> array[i];
  return array;
}

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

void sort(int* array, int size) {
  for (int i = 0; i < size - 1; ++i) {
    for (int j = i + 1; j < size; ++j) {
      if (array[j] < array[i]) {
        swap(array[i], array[j]);
      }
    }
  }
}

int rotateNum(int n, int rotations) {
  int digits = std::log10(n) + 1;
  int closestPowerOf10 = round(std::pow(10, digits - 1));
  rotations %= digits;
  while (rotations--) {
    int firstDigit = n / closestPowerOf10;
    int remaining = n % closestPowerOf10;
    n = remaining * 10 + firstDigit;
  }
  return n;
}

int biggestNeighbourSum(int* array, int size) {
  int max = std::numeric_limits<int>::min();
  for (int i = 0; i < size - 1; ++i) {
    int temp = array[i] + array[i + 1];
    if (max < temp)
      max = temp;
  }
  return max;
}

int findSatisfiedPeople(int* queue, int size) {
  int satisfied = 1;
  int minutes = queue[0];
  for (int i = 1; i < size; ++i) {
    if (minutes < queue[i])
      ++satisfied;
    minutes += queue[i];
  }
  return satisfied;
}

int** allocateMatrix(int rows, int columns) {
  int** matrix = new int*[rows];
  for (int i = 0; i < rows; ++i)
    matrix[i] = new int[columns];
  return matrix;
}

int** createMatrix(int rows, int columns) {
  int** matrix = allocateMatrix(rows, columns);
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j)
      std::cin >> matrix[i][j];
  }
  return matrix;
}

void printMatrix(int** matrix, int rows, int columns) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j)
      std::cout << matrix[i][j] << " ";
    std::cout << std::endl;
  }
}

void deleteMatrix(int** matrix, int rows) {
  for (int i = 0; i < rows; ++i) {
    delete[] matrix[i];
  }
  delete[] matrix;
}

// assume matrix is square
void transpose(int** matrix, int size) {
  for (int i = 1; i < size; ++i) {
    for (int j = 0; j < i; ++j)
      swap(matrix[i][j], matrix[j][i]);
  }
}

int** sumMatrices(int** matrixA, int** matrixB, int rows, int columns) {
  int** sum = allocateMatrix(rows, columns);
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j)
      sum[i][j] = matrixA[i][j] + matrixB[i][j];
  }
  return sum;
}

int main() {
  // problem 1
  // int a = 4;
  // int b = 10;
  // swap(a, b); // calls  swap(int& a, int& b)
  // swap(&a, &b); // calls swap(int* a, int* b)
  // print(&a, 1);
  // print(&b, 1);

  // problem 2
  // int n = 0;
  // cin >> n;
  // int* array = createArray(n);
  // sort(array, n);
  // print(array, n);
  // delete[] array;

  // problem 3
  // int n = 123456;
  // std::cout << rotateNum(n, 3) << std::endl;

  // problem 4
  // int n;
  // std::cin >> n;
  // int* array = createArray(n);
  // std::cout << biggestNeighbourSum(array, n)<<std::endl;
  // delete[] array;

  // problem 5
  // int n;
  // std::cin >> n;
  // int* array = createArray(n);
  // std::cout << findSatisfiedPeople(array, n)<<std::endl;
  // delete[] array;

  // problem 6
  // int rows, cols;
  // std::cin >> rows >> cols;
  // int** matrix = createMatrix(rows, cols);
  // printMatrix(matrix, rows, cols);
  // deleteMatrix(matrix, rows);

  // problem 7
  // int matrixSize = 0;
  // std::cin >> matrixSize;
  // int** matrix = createMatrix(matrixSize, matrixSize);
  // transpose(matrix, matrixSize);
  // printMatrix(matrix, matrixSize, matrixSize);
  // deleteMatrix(matrix, matrixSize);

  // problem 8
  // int rows;
  // int columns;
  // std::cin >> rows >> columns;
  // int** matrixA = createMatrix(rows, columns);
  // int** matrixB = createMatrix(rows, columns);
  // int** sum = sumMatrices(matrixA, matrixB, rows, columns);
  // printMatrix(sum, rows, columns);
  // deleteMatrix(sum, rows);
  // deleteMatrix(matrixA, rows);
  // deleteMatrix(matrixB, rows);

  // problem 9
  // int minCentimeters;
  // std::cin >> minCentimeters;
  // int* months = createArray(12);
  // sort(months, 12);
  // int minMonths = 0;
  // int sum = 0;
  // int idx = 0;
  // while (sum < minCentimeters)
  //{
  //    sum += months[minMonths];
  //    ++minMonths;
  //}
  // std::cout << minMonths << std::endl;
  // delete[] months;

  return 0;
}
