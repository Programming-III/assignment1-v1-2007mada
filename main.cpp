//
// Created by maham on 11/12/2025.
//

#include "Animal.h"
#include <string>
#include <iostream>

#include "Bird.h"
#include "Enclosure.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Visitor.h"

#include "Visitor.h"
#include "Reptile.h"
#include "Mammal.h"
#include "Enclosure.h"

#include "Bird.h"

using namespace std;
Animal::Animal() {

}
Animal::Animal(string name, int age,bool isHungry) {
    this->name = name;
    this->age = age;
    this->isHungry = isHungry;
}

void Animal::display() {
    cout<<name<<"(Age: "<<age<<","<<isHungry<<")"<<endl;
}


void Animal::feed() {
    if (isHungry==false) {
        isHungry=true;
    }
}

//
// Created by maham on 11/12/2025.
//

Bird::Bird() {

}
Bird::Bird(float wingSpan,string name, int age,bool isHungry):Animal(name,age,isHungry) {
    this->wingSpan = wingSpan;
}
Bird::~Bird() {

}






//
// Created by maham on 11/12/2025.
//


Enclosure::Enclosure() {
}

Enclosure::Enclosure(int capacity):
          capacity(capacity),
          currentCount(0) {
    animal = new Animal[capacity];
}
void Enclosure::addAnimal(Animal *a) {
    if (currentCount==capacity) {
        cout<<"Cannot add animal as it has reached its full capacity"<<endl;
    }
    animal[currentCount] = *a;
    currentCount++;
}
void Enclosure::displayAnimals() {
    cout<<"Enclosure 1 Animals:"<<endl;
    for (int i=0;i<currentCount;i++) {
        animal[i].display();
    }
}







//
// Created by maham on 11/12/2025.
//



Mammal::Mammal() {

}
Mammal::Mammal(string furColor, string name, int age, bool isHungry):Animal(name,age,isHungry) {
    this->furColor = furColor;
}
Mammal::~Mammal() {

}





//
// Created by maham on 11/12/2025.
//



Reptile::Reptile() {

}
Reptile::Reptile(bool isVenmous, string name, int age, bool isHungry): Animal(name,age,isHungry) {
    this->isVenmous=isVenmous;
}


Reptile::~Reptile() {

}






//
// Created by maham on 11/12/2025.
//


Visitor::Visitor() {

}
Visitor::Visitor(string visitor_name, int tickets_bought) {
    this->visitorName = visitor_name;
    this->ticketsBought = tickets_bought;
}
void Visitor::diplayInfo() {
    cout<<"Name: "<<visitorName<<endl;
    cout<<"Tickets Bought: "<<ticketsBought<<endl;
}



int main() {
    Enclosure enclosure(3);
    Mammal mammal("Yellow","Lion",5,true);
    Bird Bird(10,"Bird",2,false);
    Reptile reptile(true,"Snake",3,true);
    enclosure.addAnimal(&mammal);
    enclosure.addAnimal(&Bird);
    enclosure.addAnimal(&reptile);
    Visitor visitor("Sarah Ali",3);

    enclosure.displayAnimals();
    cout<<"Visitor Info:"<<endl;
    visitor.diplayInfo();
    return 0;

}









