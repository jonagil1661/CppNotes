#include <iostream>
using namespace std;

class ID {
 private:  // private attribute
  int socialSecurity;

 public:  // public attribute
  string name;

  ID(string name, int socialSecurity) {
    this->socialSecurity = socialSecurity;
    this->name = name;
  }

  int getSocialSecurity() { return socialSecurity; }

  void setSocialSecurity(int socialSecurity) {
    this->socialSecurity = socialSecurity;
  }
};

int main() {
  ID employee("Joe", 123456789);  // declare & instantiate object
  cout << employee.name << endl;  // don't need getter method b/c name is public
  cout << employee.getSocialSecurity()
       << endl;  // requires getter method to access

  employee.setSocialSecurity(
      123123123);  // use setter method to change value of private attribute
  cout << employee.getSocialSecurity() << endl;

  return 0;
}