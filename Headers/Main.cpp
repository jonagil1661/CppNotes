#include <iostream>
#include <string>
#include "Car.hpp"
#include "Honda.hpp"

int main() {
    Car vehicle1("Toyota", "Red");
    std::cout << "Brand is " << vehicle1.returnBrand() << std::endl;
    std::cout << "Color is " << vehicle1.returnColor() << std::endl;

    Honda vehicle2("Honda", "Silver", "Odyssey");
    std::cout << "Brand is " << vehicle2.returnBrand() << std::endl;
    std::cout << "Color is " << vehicle2.returnColor() << std::endl;
    std::cout << "Color is " << vehicle2.returnModel() << std::endl;

    return 0;
}