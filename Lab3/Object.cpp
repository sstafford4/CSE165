#include <iostream>
#include "Object.h" // including Object.h to link the header and the source. 


using namespace std; 

int Object::count = 1; // set to one so that it matches the outputs they want
Object::Object(){
    x = 0;
    count++;
}
Object::Object(int n){
    x = n; 
    count++; 
}

Object::Object(Object &y){
    x = y.x;
    count++;
}

Object::~Object(){
    count--; 
}

// this is the definition file therefore there is no need for a main() function .
