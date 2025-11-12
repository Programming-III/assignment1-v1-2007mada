//
// Created by maham on 11/12/2025.
//

#ifndef TEST_ANIMAL_H
#define TEST_ANIMAL_H
#include <string>
#include <iostream>
using namespace std;

class Animal {
private:
    string name;
    int age;
    bool isHungry;
public:
    Animal();
    Animal(string name, int age,bool isHungry);
    ~Animal();
    void display();

    string getName();
    int getAge();

    void setName(string name);
    void setAge(int age);
    void setHungry(bool isHungry);
    void feed();

};


#endif //TEST_ANIMAL_H
