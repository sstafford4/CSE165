#pragma once
#include<iostream>
#include "Data.h"
#include "Sortable.h"

class Circle: public Sortable{
    private:
    float radius; 

    public:
    Circle(){ // default constructor
        radius = NULL; 
    }
    Circle(float r){ // non-default constructor
        radius = r; 
    }


    // overriding the Sortable compare() to fit Circle.
    // Parameter must be const
    bool compare(const Sortable* s) override{
        const Circle* circle = dynamic_cast<const Circle*>(s); // converts data from one type to another using dynamic_cast<>
        // in this case, turning s into a constant Circle* 
        if (circle){
            return radius < circle->radius; // if circle is a circle, return true. 
        }
        else{
            return false; // if s is not a circle, then return false
        }
    }

    void print() override{
        std::cout << "Circle with radius: " << radius << std::endl; 
    }
};