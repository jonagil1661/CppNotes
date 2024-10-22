#pragma once 
#include <string>

class Car {
 protected:
  std::string brand;
  std::string color;

 public:
  Car(std::string brand, std::string color);
  std::string returnBrand();
  std::string returnColor();
};

