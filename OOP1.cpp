#include <iostream>
using namespace std;

class PublicClass { // class declaration
    public: // access specifier
    int number; // attribute

    void method1() {
        cout << 3 + 5 - 2 << endl;
    }

    void method2(string txt); // declare method inside class
};

void PublicClass::method2(string txt) { // define method outside class
    cout << txt << endl;
}

int main() {
    PublicClass myObject; // creates an object of PublicClass

    myObject.number = 2; // access attributes of PublicClass and set values
    myObject.method1(); // use object to call method of PublicClass

    myObject.method2("HI THERE");
return 0;
}