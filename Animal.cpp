#include "Animal.h"
#include <iostream>

Animal::Animal() : species(""), year_discovered(0) {}

Animal::Animal(const std::string& speciesName, unsigned int discoveryYear)
    : species(speciesName), year_discovered(discoveryYear) {}

void Animal::display() {
    std::cout << species << " [" << year_discovered << "]" << std::endl;
}
