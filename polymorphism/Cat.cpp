#include "Cat.h"
#include <iostream>

Cat::Cat(const std::string& name) : Animal(name) {}

void Cat::makeSound() const 
{
    std::cout << name << " meows." << std::endl;
}
