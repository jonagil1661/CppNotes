#include <iostream>

using namespace std;

int main() {
  /*
  enums
  */

  // enum is a special type that represents a group of constants.
  enum Spiciness { low, mild, spicy };
  enum Spiciness myVariable;   // create variable to access enum
  myVariable = mild;           // assign a value to enum variable
  cout << myVariable << endl;  // default: first item has value 0, second item
                               // has value 1, etc.

  enum Spiciness1 { low1 = 1, mild1 = 5, spicy1 = 10 };
  enum Spiciness1 myVariable2 = spicy1;
  cout << myVariable2 << endl;  // outputs 10

  enum Spiciness2 {  // next items update numbers correspondingly
    low2 = 4,
    mild2,  // now 5
    spicy2  // now 6
  };

  switch (myVariable) {
    case 0:
      printf("low");
      break;
    case 1:
      printf("mild");
      break;
    case 2:
      printf("spicy");
      break;
    default:
      printf("SUPER SPICY");
  }
  cout << endl;

  /*
  References
  */

  // reference variable is a reference to an existing variable
  string color = "red";
  string& otherNameForColor = color;  // reference to color

  cout << color << " " << otherNameForColor << endl;  // outputs "red"
  cout << &color << endl;  // outputs memory address of variable

  /*
  Pointers
  */

  // pointers store the memory address as its value
  string food = "Hamburger";
  string* foodPointer = &food;  // pointer variable storing address of food
  cout << foodPointer << endl;  // outputs memory address of food

  cout << *foodPointer
       << endl;  // outputs dereferenced value of pointer variable

  *foodPointer = "Sandwich";     // change the value of the pointer
  cout << *foodPointer << endl;  // outputs new pointer value
  cout << food << endl;          // outputs new value of variable

  return 0;
}