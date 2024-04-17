#ifndef CREATE_ARRAY
#define CREATE_ARRAY

#include <string> 
// COMPLETED
// createArray takes in a size and an int* arr that is null.
void createArray(int n, int* &arr){
        if (n < 1){
            std::cout << "ERROR: Size of array < 1" << std::endl;
        }
        arr = new int[n]; // dynammically allocates the space
        if (n >= 1){
            arr[0] = 0;
        }
        if (n >= 2){
            arr[1] = 1; 
        }
        for (int i = 2; i < n; i++){
            arr[i] = arr[i - 1] + arr[i - 2];
        }
}

void printArray(int n, int* &arr){
    if (arr[1] != 1){ // this is how I am preventing the program from printing an invalid array. The array would be filled w junk if its not valid, therefore Im setting a parameter
                    // that makes sure it has a fibonacci sequence. 
        std::cout << "Invalid array." << std::endl; 
    }
    else{
        for (int i = 0; i < n; i++){
            std::cout << arr[i] << " ";
        }
    }
    std::cout << "\n\n"; 
}

#endif