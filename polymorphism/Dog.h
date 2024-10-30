#ifndef DOG_H
#define DOG_H

#include "Animal.h"

// Derived class: Dog
class Dog : public Animal {
public:
    Dog(const std::string& name);
    void makeSound() const override;  // Overriding makeSound for Dog
};

#endif
