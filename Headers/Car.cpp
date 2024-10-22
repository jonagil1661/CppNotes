#include <iostream>
#include <string>
#include "Car.hpp"

  Car::Car(std::string brand, std::string color) : brand(brand), color(color) {
    //this->brand = brand;
    //this->color = color;
  }
  std::string Car::returnBrand() { return brand; }
  std::string Car::returnColor() { return color; }