#include <iostream>
using namespace std;
using namespace string;

int main() {
  /*
    String Concatenation
  */

  string firstName = "Johnny", lastName = "Gill";
  string fullName = firstName + " " + lastName;
  cout << fullName << endl;

  string fullName2 = firstName.append(lastName);

  /*
    String length
  */

  string txtLong = "qwertyuiopasdfghjklzxcvbnm";
  cout << "The string's length is: " << txtLong.length() << endl;
  cout << "The string's length is: " << txtLong.size() << endl;

  /*
    Access Strings
  */

  string myString = "Hello";
  cout << myString[0] << endl; // outputs H
  myString[0] = 'J';
  myString[myString.size() - 1] = 'y';
  cout << myString << endl;

  cout << myString.at(0); // first character using at()

  /*
    C-style strings
  */

  string greeting1 = "Hello"; // regular string
  char greeting2[] = "Hello"; // C-Style string (an array of characters)

  
  return 0;
}
