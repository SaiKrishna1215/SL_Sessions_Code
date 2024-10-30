#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal 
{
    public:
        Cat(const std::string& name);
        void makeSound() const override;
};

#endif
