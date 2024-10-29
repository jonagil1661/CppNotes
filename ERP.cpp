#include <iostream>

//using namespace std;

int main() {
  /*
  enums
  */

  // enum is a special type that represents a group of constants.
  enum Spiciness { low, mild, spicy };
  enum Spiciness myVariable;   // create variable to access enum
  myVariable = mild;           // assign a value to enum variable
  std::cout << myVariable << std::endl;  // default: first item has value 0, second item
                               // has value 1, etc.

  enum Spiciness1 { low1 = 1, mild1 = 5, spicy1 = 10 };
  enum Spiciness1 myVariable2 = spicy1;
  std::cout << myVariable2 << std::endl;  // outputs 10

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
  std::cout << std::endl;

  /*
  References
  */

  // reference variable is a reference to an existing variable
  std::string color = "red";
  std::string& otherNameForColor = color;  // reference to color

  std::cout << color << " " << otherNameForColor << std::endl;  // outputs "red"
  std::cout << &color << std::endl;  // outputs memory address of variable

  /*
  Pointers
  */

  // pointers store the memory address as its value
  std::string food = "Hamburger";
  std::string* foodPointer = &food;  // pointer variable storing address of food
  std::cout << foodPointer << std::endl;  // outputs memory address of food

  std::cout << *foodPointer
       << std::endl;  // outputs dereferenced value of pointer variable

  *foodPointer = "Sandwich";     // change the value of the pointer
  std::cout << *foodPointer << std::endl;  // outputs new pointer value
  std::cout << food << std::endl;          // outputs new value of variable

  return 0;
}