#ifndef CAR_HPP
#define CAR_HPP

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

#endif CAR_HPP
