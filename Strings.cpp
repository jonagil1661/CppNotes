#include <iostream>

int main() {
  /*
    String Concatenation
  */

  std::string firstName = "Johnny", lastName = "Gill";
  std::string fullName = firstName + " " + lastName;
  std::cout << fullName << std::endl;

  std::string fullName2 = firstName.append(lastName);

  /*
    String length
  */

  std::string txtLong = "qwertyuiopasdfghjklzxcvbnm";
  std::cout << "The string's length is: " << txtLong.length() << std::endl;
  std::cout << "The string's length is: " << txtLong.size() << std::endl;

  /*
    Access Strings
  */

  std::string myString = "Hello";
  std::cout << myString[0] << std::endl;  // outputs H
  myString[0] = 'J';
  myString[myString.size() - 1] = 'y';
  std::cout << myString << std::endl;

  std::cout << myString.at(0);  // first character using at()

  /*
    C-style strings
  */

  std::string greeting1 = "Hello";  // regular string
  char greeting2[] = "Hello";  // C-Style string (an array of characters)

  return 0;
}
