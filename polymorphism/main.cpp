#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<Animal*> animals;
    
    animals.push_back(new Dog("Buddy"));
    animals.push_back(new Cat("Whiskers"));

    for (const auto& animal : animals) {
        animal->makeSound();
    }

    for (auto& animal : animals) {
        delete animal;
    }

    return 0;
}
