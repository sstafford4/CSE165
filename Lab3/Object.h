#pragma once

struct Object{

    static int count;
    int x; 

    // default constructor
    Object(); 
    // integer constructor
    Object(int n); 

    // TASK 2:
    // my copy constructor
    Object(Object &y); 

    // most of these notes are based on looking at the program and the sample output. 

    // need a default constructor that takes no paramters
        // default constructor sets the value of a.x to zero, therefore i think it should set x = 0 and/or null. 

    // need a constructor that takes in a single integer as a parameter
        // int constructor most likely sets b.x (in this case) to be 5 (based on the value given in the test program)
        // idk if x is an integer or a pointer. The program uses a.x, b.x which tells me it probably isnt a normal integer. 

    // a.x and b.x are used in a simple arithmetic, a.x + b.x, meaning i dont think theres anything weird about x, meaning that theres 
    // a chance its just a normal integer.  

    // In the program, they create an Object* p that dynammically allocates space for an Object array of size n. Therefore, I think that they add n more objects to 
    // a data container, then count() counts the amount of elements after the n amount has been added. n is the randomly generated number. 

    // honestly i dont think count is a function based on how it is written in the program. 
        // They simply print it like:
            // cout << Object::count << endl;
        // idk what this implies bc I originally though based on the outputs given that it would be a function with a purpose. 
        // but i thought that the syntax for that would be something like Object::count() with the parenthesis. 


    // my destructor
    ~Object(); 
};