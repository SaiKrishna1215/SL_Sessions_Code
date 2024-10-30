#ifndef CAT_H
#define CAT_H

#include "Animal.h"

// Derived class: Cat
class Cat : public Animal {
public:
    Cat(const std::string& name);
    void makeSound() const override;  // Overriding makeSound for Cat
};

#endif
