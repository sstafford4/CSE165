#include <iostream>
#include "Stack.h" // including the header file

using namespace std; 

void Stack::Link::initialize(void* dat, Link* nxt){ // This method takes the arguments and assigns them to its members
    data = dat;
    next = nxt; 
}

void Stack::initialize(){ // sets head to null, so the object knows it has an empty list. 
    head = nullptr;
    deletecb = nullptr; // added so that the dcb initializes to null
}

void Stack::push(void* dat){ // Takes the argument, which is a pointer to the variable you want to keep track of, and pushes it on the Stack. 
    Link* newLink = new Link; // firstly, allocates new space for the link that will go to the top
    newLink->initialize(dat, head); // uses Link's initialize to assign it to its spot. 
    head = newLink; // this is what pushes it to the top. 
}

void* Stack::peek(){ // this is the printing function methinks. 
    if (head != nullptr){
        return head->data;
    }
    else{
        //cout << "Stack Empty" << endl;
        return nullptr; 
    }
}

void* Stack::pop(){ // captures the data pointer at the curren top of the stack, then moves the head down and deletes the old value. Then returns the captured pointer
    if (head != nullptr){
        void* data = head->data;
        Link* temp = head;
        head = head->next;
        delete temp;
        return data;
    }
    else{
        return 0; 
    }
}

// The second task requires I modify cleanup()
// keeping my original: 
// void Stack::cleanup(){
//     while (head != nullptr){
//         pop();
//     }
// }

// Task 2: COMPLETE
void Stack::cleanup(){
    while (head != nullptr){
        Link* temp = head;
        head = head->next;
        // if (deletecb != nullptr){
        //     deletecb(temp->next); 
        // }
        deletecb(temp->data); 
        delete temp; 
    }
}


void Stack::setDeleteCallback(void(*delcb)(void* pt)){
    deletecb = delcb; 
}

Stack::~Stack(){ // destructor calls cleanup() to delete the contents of the stack .
    cleanup(); 
}