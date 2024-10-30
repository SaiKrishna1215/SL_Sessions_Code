#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

// Base class
class Animal {
public:
    Animal(const std::string& name);
    virtual ~Animal();  // Virtual destructor for polymorphism

    virtual void makeSound() const = 0;  // Pure virtual function

protected:
    std::string name;
};

#endif
