#include "AnimalsInZoo.h"
#include <iostream>

AnimalsInZoo::AnimalsInZoo() : numAnimals(0), animal() {}

AnimalsInZoo::AnimalsInZoo(const Animal& a) : numAnimals(1), animal(a) {}

void AnimalsInZoo::display() {
    std::cout << "numAnimals=" << numAnimals << std::endl;
    if (numAnimals > 0) {
        animal.display();
    }
}
