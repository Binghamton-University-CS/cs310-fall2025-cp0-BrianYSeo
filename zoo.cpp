#include <iostream>
#include "Animal.h"
#include "AnimalsInZoo.h"

int main() {
    Animal* animal1 = new Animal("African Elephant", 1758);
    Animal  animal2("Giant Panda", 1869);
    Animal  animal3("Lion", 2001);

    delete animal1;
    animal1 = new Animal("Snow Leopard", 1777);

    animal3.display();
    animal2.display();
    animal1->display();

    AnimalsInZoo emptyEnclosure;
    AnimalsInZoo pandaEnclosure(animal2);
    emptyEnclosure.display();
    pandaEnclosure.display();

    delete animal1;
}
