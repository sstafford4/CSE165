#pragma once
#include "Entry.h" // inluding the other header so that i can access its class
#include <iostream>
#include <string>
#include <vector> 


class AddressBook{

    private:
    std::vector<Entry> entries;

    public:
    void add(Entry* entry){
        entries.push_back(*entry);
    }

    void print(){
        for (int i = 0; i < entries.size(); i++){
            entries[i].print(); 
        }
    }
};