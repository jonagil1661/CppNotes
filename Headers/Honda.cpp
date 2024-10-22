#include "Honda.hpp"

#include <iostream>

  Honda::Honda(std::string brand, std::string color, std::string model) : model(model), Car(brand, color)  {
  }
  std::string Honda::returnModel() { return model; }
