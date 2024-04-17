#pragma once 
#include "Vec.h"

class Rect{
    public:
        float x, y, w, h;

        Rect(){}

        Rect(float a, float b, float c, float d){
            x = a; 
            y = b;
            w = c;
            h = d;  
        }

        bool contains(const Vec& v){
            return v.x >= x && v.x <= x + w && v.y <= y && v.y >= y - h; 
            
        }
};