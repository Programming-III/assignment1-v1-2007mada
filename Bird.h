//
// Created by maham on 11/12/2025.
//

#ifndef TEST_BIRD_H
#define TEST_BIRD_H
#include "Animal.h"


class Bird:public Animal {
private:
    float wingSpan;
public:
    Bird();

    Bird(float wingSpan, string name, int age, bool isHungry);
    ~Bird();
    float getWingSpan();
    void setWingSpan(float wingSpan);

};


#endif //TEST_BIRD_H
