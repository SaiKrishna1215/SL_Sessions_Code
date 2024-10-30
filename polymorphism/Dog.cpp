#include "Dog.h"
#include <iostream>

Dog::Dog(const std::string& name) : Animal(name) {}

void Dog::makeSound() const 
{
    std::cout << name << " barks." << std::endl;
}
