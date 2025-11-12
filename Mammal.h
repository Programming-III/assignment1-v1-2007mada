//
// Created by maham on 11/12/2025.
//

#ifndef TEST_MAMMAL_H
#define TEST_MAMMAL_H
#include "Animal.h"


class Mammal : public Animal{
private:
    string furColor;
public:
    Mammal();
    Mammal(string furColor,string name, int age,bool isHungry);
    ~Mammal();
    void setFurColor(string furColor);
    string getFurColor();

};


#endif //TEST_MAMMAL_H
