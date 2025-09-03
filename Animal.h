#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
public:
    Animal();
    Animal(const std::string& speciesName, unsigned int discoveryYear);
    void display();
private:
    std::string species;
    unsigned int year_discovered;
};

#endif // ANIMAL_H
