#include <string>
#include "Car.hpp"

class Honda : public Car {
 protected:
  std::string model;

 public:
  Honda(std::string brand, std::string color, std::string model);
  std::string returnModel();
};