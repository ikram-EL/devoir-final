//
// Created by IKRAM EL OMARI on 6/11/2023.
//

#include "Stack.h"
#include <iostream>
#include <vector>
#include <exception>

using namespace std;
    void  Stack :: operator<< (int n){
    if(elements.capacity () < dimension){
        elements.push_back(n);
    }else {
        throw overflow_error("** La pile est pleine **");

    }
}
    void Stack :: operator>> (int& n ){
    if(!elements.empty()){
    n=elements.back();
    elements.pop_back();
    } else {
        throw underflow_error("** La pile est vide **");
    }
         }
    bool  Stack :: operator ++() {
       return (elements.capacity() == dimension );
    }
    bool  Stack :: operator --() {
    return elements.empty();
}
