#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal 
{
    protected:
        std::string name;

    public:
        Animal(const std::string& name);
        virtual ~Animal();

        virtual void makeSound() const = 0;
};

#endif
