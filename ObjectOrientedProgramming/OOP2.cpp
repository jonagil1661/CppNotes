#include <iostream>

class ID {
 private:  // private attribute
  int socialSecurity;

 public:  // public attribute
  std::string name;

  ID(std::string name, int socialSecurity) {
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
  std::cout << employee.name << std::endl;  // don't need getter method b/c name is public
  std::cout << employee.getSocialSecurity()
       << std::endl;  // requires getter method to access

  employee.setSocialSecurity(
      123123123);  // use setter method to change value of private attribute
  std::cout << employee.getSocialSecurity() << std::endl;

  return 0;
}