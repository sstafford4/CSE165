#pragma once
#include <iostream>

class Vec{
    public:
        float x,y;

        Vec(){
            x = 0.0f;
            y = 0.0f; 
        }
        Vec(float u, float v){
            x = u;
            y = v; 
        }
        void set(float u, float v){
            x = u; 
            y = v; 
        }
        void add(const Vec& n){
            x = x + n.x;
            y = y + n.y; 
        }
        void print(){
            std::cout << "(" << x << "," << y << ")" << std::endl; 
            
        }
};