#include <iostream>
#include <cmath> // include the cmath library
using namespace std;

int main() {
    /*
      Algebra
    */

    int sum;
    sum = 2134 + 13;

    int a = 1, b = 4, c = 21;
    cout << a + b + c <<endl; //outputs the sum of a, b, c

    // when declaring a const variable, a value MUST be assigned at the same time
    const int unchangeableNumber = 4; // 'const' means unchangeable and read only

    // Gather user input
    int x; 
    cout << "Type a number: "; 
    cin >> x; // Get user input from the keyboard
    cout << "Your number is: " << x <<endl; 

    // cout and cin can be on the same line
    int xx;
    cout << "Type another number: " , cin >> xx , cout << "Your number is: " << xx << endl;

    cout << --xx << endl;
    cout << xx++ << endl;
    cout << xx << endl;

    cout << "The modulus of 5 % 2 is: " << 5 % 2 <<endl;

    xx += 1234;

    xx /= 23;

    /*
      Comparisons
    */

    cout << "5 < 3 is: " << (5 < 3) << endl; // doesn't return true but rather in binary.
    cout << "5 == 5 is: " << (5 == 5) << endl; // need to paranthesize the comparison expression in cout

    bool YesNo = (7 <= 63 && 4 != 7); // logical operators

    cout << YesNo << endl;

    /*
      Max/Min
    */

    cout << max(5, 10) << endl; // returns 10
    cout << min(5, 10) << endl; // returns 5

    /*
      cmath
    */
    cout << sqrt(64) << endl; // returns 8
    cout << round(2.6) << endl; // returns 3 (to nearest integer)
    cout << log(2) << endl; // returns natural logarithm of 2 = 0.693147
    
    return 0;
}
