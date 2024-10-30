#include "Dog.h"
#include <iostream>

// Constructor for Dog
Dog::Dog(const std::string& name) : Animal(name) {}

// Overridden sound for Dog
void Dog::makeSound() const {
    std::cout << name << " barks." << std::endl;
}
