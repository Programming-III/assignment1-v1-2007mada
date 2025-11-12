//
// Created by maham on 11/12/2025.
//

#ifndef TEST_VISITOR_H
#define TEST_VISITOR_H
#include <string>
#include<iostream>
using namespace std;

class Visitor {
private:
    string visitorName;
    int ticketsBought;
public:

    Visitor(string visitor_name, int tickets_bought);
    Visitor();
    void diplayInfo();

};


#endif //TEST_VISITOR_H
