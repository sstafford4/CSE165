#pragma once
#include "Animal.h"

class Dog: public Animal{
    public:
        Dog(string n, int a){
            cout << "Creating Dog" << endl;
            name = n;
            age = a; 
        }
        void feed(){std::cout << "Dog food, please!" << endl;}
        ~Dog(){cout << "Deleting Dog" << endl;}
};