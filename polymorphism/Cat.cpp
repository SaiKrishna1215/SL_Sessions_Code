#include "Cat.h"
#include <iostream>

// Constructor for Cat
Cat::Cat(const std::string& name) : Animal(name) {}

// Overridden sound for Cat
void Cat::makeSound() const {
    std::cout << name << " meows." << std::endl;
}
