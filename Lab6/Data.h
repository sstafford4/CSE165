#pragma once
#include "Sortable.h"
#include<iostream>
#include<vector>
#include<algorithm>

class Data{ // we are NOT suppose to inherit anything, just using compostion. 
    public:
    std::vector<Sortable*> data; 
    void add(Sortable* n){data.push_back(n);}

    void sort(){
        //std::sort(data.begin(), data.end());
        // Did not make the parameters const like in the compare() function of Sortable bc it was causing an error. 
        std::sort(data.begin(), data.end(), [](Sortable* a,Sortable* b) {
            return a->compare(b); // -> allows us to use compare method of Sortable 
        });
        std::cout << std::endl; // this is just to get the output correct 
    }
    void print(){
        for (int i = 0; i < data.size(); i++){
            data[i]->print(); // accesses the print() function from Sortable
        }
        std::cout << " "; 
        // for (int i = 0; i < data.size(); i++){
        //     std::cout << data[i] << " ";
        // }
    }
};