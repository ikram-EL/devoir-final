#include <iostream>
#include "Stack.h"
#include <vector>
#include <exception>

using namespace std;
int main() {
    try{
       Stack pile;
    pile<<16;
    pile<<20;
    pile<<5;
    int Val_Haut_Pile;
    pile>>Val_Haut_Pile;
    cout<<"La valeur haut du pile est :  "<<Val_Haut_Pile<<endl;
    while (operator -- ()) {
        cout<<"la pile n'est pas vide "<<endl;
    }
        while (operator ++() ) {
            cout<<"la pile est peline "<<endl;
        }

    } catch (const exception& e){
        cerr<<"ERREUR"<<e.what()<<endl;
    }



    return 0;
}
