//
// Created by maham on 11/12/2025.
//

#ifndef TEST_REPTILE_H
#define TEST_REPTILE_H
#include "Animal.h"


class Reptile : public Animal{
private:
    bool isVenmous;
public:
    Reptile();
    Reptile(bool isVenmous,string name, int age,bool isHungry);
    ~Reptile();
    void getVenmous();
    void setVenmous();
    

};


#endif //TEST_REPTILE_H
