#include <cmath>  // include the cmath library
#include <iostream>

int main() {
  /*
    Algebra
  */

  int sum;
  sum = 2134 + 13;

  int a = 1, b = 4, c = 21;
  std::cout << a + b + c << std::endl;  // outputs the sum of a, b, c

  // when declaring a const variable, a value MUST be assigned at the same time
  const int unchangeableNumber = 4;  // 'const' means unchangeable and read only

  // Gather user input
  int x;
  std::cout << "Type a number: ";
  std::cin >> x;  // Get user input from the keyboard
  std::cout << "Your number is: " << x << std::endl;

  // cout and cin can be on the same line
  int xx;
  std::cout << "Type another number: ", std::cin >> xx,
      std::cout << "Your number is: " << xx << std::endl;

  std::cout << --xx << std::endl;
  std::cout << xx++ << std::endl;
  std::cout << xx << std::endl;

  std::cout << "The modulus of 5 % 2 is: " << 5 % 2 << std::endl;

  xx += 1234;

  xx /= 23;

  /*
    Comparisons
  */

  std::cout << "5 < 3 is: " << (5 < 3)
       << std::endl;  // doesn't return true but rather in binary.
  std::cout << "5 == 5 is: " << (5 == 5)
       << std::endl;  // need to paranthesize the comparison expression in cout

  bool YesNo = (7 <= 63 && 4 != 7);  // logical operators

  std::cout << YesNo << std::endl;

  /*
    Max/Min
  */

  std::cout << std::max(5, 10) << std::endl;  // returns 10
  std::cout << std::min(5, 10) << std::endl;  // returns 5

  /*
    cmath
  */
  std::cout << sqrt(64) << std::endl;    // returns 8
  std::cout << round(2.6) << std::endl;  // returns 3 (to nearest integer)
  std::cout << log(2) << std::endl;      // returns natural logarithm of 2 = 0.693147

  return 0;
}
