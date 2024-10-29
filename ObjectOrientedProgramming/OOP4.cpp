#include <iostream>

/*
Polymorphism uses inherited attributes/methods:
- Example for multiple classes in same .cpp file
- Base class constructors are automatically called if there's no argument
- Every child constructor must call super class's constructor
- Unlike Java, C++ supports multiple inheritance, so base/super class is called
by name, not 'super()'
*/

class Apple {
 private:
  int cost;
  std::string color;

 protected:
  Apple(int cost, std::string color) {  // parent constructor
    this->cost = cost;
    this->color = color;
  }

 public:
  int getCost() { return cost; }
  std::string getColor() { return color; }
};

class IPhone : public Apple {
 private:
  bool homeButton;

 public:
  IPhone(int cost, std::string color, bool homeButton)
      : Apple(cost, color) {  // calls super class constructor in sub class's
                              // initialization list
    this->homeButton = homeButton;
  }
  bool getHomeButton() { return homeButton; }
};

class MacBook : public Apple {
 private:
  double size;

 public:
  MacBook(int cost, std::string color, double size) : Apple(cost, color) {
    this->size = size;
  }
  double getSize() { return size; }
};

int main() {
  IPhone iPhone16(1000, "silver", false);
  MacBook macBookPro(2000, "gray", 13.6);

  std::cout << iPhone16.getCost() << std::endl;
  std::cout << iPhone16.getColor() << std::endl;
  std::cout << iPhone16.getHomeButton() << std::endl;

  std::cout << macBookPro.getCost() << std::endl;
  std::cout << macBookPro.getColor() << std::endl;
  std::cout << macBookPro.getSize() << std::endl;
}