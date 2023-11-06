//
// Created by IKRAM EL OMARI on 6/11/2023.
//

#ifndef UNTITLED30_STACK_H
#define UNTITLED30_STACK_H
#include <iostream>
#include <vector>
#include <exception>

using namespace std ;
class Stack {
private :
    vector <int> elements; //utilisation du classe Stack pour stocker les elements de pile
    int dimension;
public:
    Stack (int capacity = 20 ):  dimension(capacity){}
    void operator<< (int);
    void operator>> (int&);
    bool operator++();
    bool operator--();

};


#endif //UNTITLED30_STACK_H
