#include <iostream>
using namespace std;

/*
Access specifiers:
public - members can be accessed outside of class
private - members can only be viewed/accessed in the class
protected - members can only be accessed in inherited classes
*/
class PublicClass {  // class declaration
 public:             // access specifier
  int number;        // attribute
 private:
  int socialSecurity;

 public:           // re-declare everything under to be public
  PublicClass() {  // constructor declaration that's called automatically when
                   // object of class is created
    this->number = 1000;
  }

  PublicClass(int number);  // constructor with different parameters

  void method1() { cout << 3 + 5 - 2 << endl; }

  void method2(string txt);  // declare method inside class without definition
};

void PublicClass::method2(string txt) {  // define method outside class
  cout << txt << endl;
}
PublicClass::PublicClass(int number) {  // constructor defined outside class
  this->number = number;
}

int main() {
  PublicClass myObject;  // creates an object of PublicClass

  myObject.number = 2;  // access attributes of PublicClass and set values
  myObject.method1();   // use object to call method of PublicClass

  myObject.method2("HI THERE");

  return 0;
}