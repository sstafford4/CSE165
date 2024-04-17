#pragma once
#include <iostream>
#include <string>

class Entry{

    std::string first, last, emailAddress; 

    public: 
    void setName(std::string n){
        first = n;
    }

    void setLastName(std::string n){
        last = n; 
    }

    void setEmail(std::string n){
        emailAddress = n; 
    }

    void print(){
        std::cout << "First Name: " << first << std::endl;
        std::cout << "Last Name: " << last << std::endl; 
        std::cout << "Email Address: " << emailAddress << std::endl; 
    }



};