#include<iostream>
#include<sstream>
#include "Animal.h"
#include "Dog.h"
#include "display.h"
#include<vector>
#include<string>

using namespace std;

// the main issue was that i didnt include animal.h and dog.h in display bruh 
int main(){
    vector<Animal*> animals; // vector of type animal pointer so that its compatible w/ display
    int n;
    cin >> n;
    cin.ignore(); 

    string aDeets;
    char type;
    string name;
    int age;

    for (int i = 0; i < n; i++){
        getline(cin, aDeets); 
        stringstream ss(aDeets);
         
        //stringstreaming the seperate parts of the string to the different variables. 
        ss >> type;
        ss >> name;
        ss >> age; 

        if (type == 'A'){
            Animal* animal = new Animal();
            animal->setName(name);
            animal->setAge(age);
            animals.push_back(animal); // the issue was making he vector a const 
        }

        else if (type == 'D'){
            Dog* dog = new Dog(name, age);
            animals.push_back(dog);
        }
    }
    display(animals); // accesses the display() function from the header file.

    return 0; 
}