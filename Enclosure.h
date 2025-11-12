//
// Created by maham on 11/12/2025.
//

#ifndef TEST_ENCLOSURE_H
#define TEST_ENCLOSURE_H
#include "Animal.h"


class Enclosure {
private:
    Animal *animal;
    int capacity;
    int currentCount;
public:
    Enclosure();
    Enclosure(int capacity);
    ~Enclosure() {
        delete[] animal;
        animal=nullptr;
    }
    void addAnimal(Animal *a);
    void displayAnimals();
};


#endif //TEST_ENCLOSURE_H
