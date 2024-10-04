#include <iostream>

using namespace std;

/*
Functions need to be defined before being called
*/

void function1() {  // function declaration (use keyword 'void' to return
                    // nothing)
  cout << "Hello World!" << endl;  // definition
}

void function2(string name) {  // functions can have parameters
  cout << "My name is " << name << endl;
}

/*
Method overloading: Methods can have same name as long as they have different
parameters.
*/

void function3(string name = "John") {  // set default parameter value
  cout << "My name is " << name << endl;
}

void function3(string name, int age) { // add multiple parameters
  cout << "My name is " << name << " ,and I am " << age << " years old." << endl;
}

void function3(int list[3]) {
    for (int i = 0; i < 3; i++) {
        cout << i << endl;
    }
}

int function4(int x) {
    return x * x; // return integer value
}

/*
Pass reference to function to change value of arguments
*/

void swapNumbers (int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

/*
Recursion: Function calls itself
*/

int divisibleBy5(int x) {
    if ((x - 5) < 0) {
        return x;
    } else {
        return divisibleBy5(x - 5);
    }
}

int main() {
  function1();              // calls function1()
  function2("Jennifer");    // calls function2() w/ argument
  function3("Brandy", 32);  
  function3();
  int value = function4(3); // store result inside variable
  int list[3] = {1, 2, 3};
  function3(list);

  int x = 1, y = 2;
  swapNumbers(x, y); // swaps the references' values
  cout << x << y << endl; // outputs 2 1

  cout << divisibleBy5(17) << endl;

  return 0;
}