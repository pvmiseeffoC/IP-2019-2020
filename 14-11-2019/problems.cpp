#include <algorithm>
#include <array>
#include <cmath>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

struct Point {
  double x;
  double y;
};

bool insideCircle(Point center, Point k, double radius) {
  if (std::pow(k.x - center.x, 2) + std::pow(k.y - center.y, 2) <= radius)
    return true;
  return false;
}

template <typename T>
bool arrayIsSorted(std::vector<T> const& array) {
  std::size_t len = array.size();
  if (len > 1) {
    bool sorted = true;
    if (array.front() <= array.back()) {
      for (int i = 0; i < len - 1; ++i) {
        sorted &= (array[i] <= array[i + 1]);
      }
    } else {
      for (int i = 0; i < len - 1; ++i) {
        sorted &= (array[i] >= array[i + 1]);
      }
    }
    return sorted;
  }
  return true;
}

bool isPrime(int num) {
  if (num <= 2)
    return true;

  int limit = static_cast<int>(std::round(std::sqrt(num)));
  int denomCount = 0;

  for (int denom = 2; denom <= limit; ++denom) {
    if (num % denom == 0)
      ++denomCount;
  }
  return denomCount == 0;
}

std::string toHex(int num) {
  std::array<char, 16> alphabet = {'0', '1', '2', '3', '4', '5', '6', '7',
                                   '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  std::string result;

  while (num > 0) {
    result.insert(std::begin(result), alphabet[num % 16]);
    num /= 16;
  }
  std::cout << result << std::endl;
  return result;
}

bool isSpecial(int num) {
  int digits = std::log10(num) + 1;
  bool special = true;
  for (int i = digits - 1; i >= 2; --i) {
    auto fdigit = (num / static_cast<int>(std::round(std::pow(10, i)))) % 10;
    auto sdigit =
        (num / static_cast<int>(std::round(std::pow(10, i - 1)))) % 10;
    auto tdigit =
        (num / static_cast<int>(std::round(std::pow(10, i - 2)))) % 10;
    special &= (fdigit == (sdigit * tdigit));
  }
  return special;
}

bool isPalindrome(int num) {
  int numCopy = num;
  int reversed = 0;

  while (numCopy > 0) {
    reversed *= 10;
    reversed += numCopy % 10;
    numCopy /= 10;
  }

  return reversed == num;
}

int main() {
  std::vector<int> v{1, 2, 3, 4, 5, 6, 7};
  std::cout << "Sorted: " << arrayIsSorted(v) << std::endl;
  std::cout << "Is 7 prime: " << isPrime(7) << std::endl;
  std::cout << "Is 8 prime: " << isPrime(8) << std::endl;
  toHex(0xFFAA);
  std::cout << "Is 331 special: " << isSpecial(331) << std::endl;
  std::cout << "Is 632 special: " << isSpecial(632) << std::endl;
  std::cout << "Is 772 special: " << isSpecial(772) << std::endl;

  std::cout << "Is 131 palindrome " << isPalindrome(131) << std::endl;
  std::cout << "Is 1331 palindrome " << isPalindrome(1331) << std::endl;
  std::cout << "Is 42524 palindrome " << isPalindrome(42524) << std::endl;
  std::cout << "Is 425424 palindrome " << isPalindrome(425424) << std::endl;
  return 0;
}
