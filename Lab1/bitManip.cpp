#include <iostream>
#include <bitset>

using namespace std;

// COMPLETED
void decToBin(int n){
    //int m = n; // setting m = n for output printing reasons. I dont remember how to use %d and stuff to store integers so this is the method im using.
    int binaryNum[32]; // an array to store the binary number, has 32 slots for 32 bits.
    int i = 0; 
    while (n > 0){
        binaryNum[i] = n % 2; // storing the remainders in the binary array.
        n = n / 2; 
        i++;//making the counter go up for size reasons.
    }
    //cout << "Binary representation of " << m << " is "; 
    for (int j = i - 1; j >= 0; j--){ // printing the array in reverse order. 
        cout << binaryNum[j];
    }
    cout << endl; 
}

// WORKS 
// This does a bitwise shift to the right of the binary version of n by the amount of spaces given by index. 
void getBit(int n, int index){
    // after the right shift ( >> ), the program will do a bitwise && operation with 1, which will return 1 if the rigthmost digit is 1 and 0 otherwise
    int shifted = ((n & (1 << index)) != 0); // learned from: https://www.geeksforgeeks.org/all-about-bit-manipulation/
    cout << "Get bit index at " << index << ": " << shifted << endl; // this prints out the statement. 
}

// WORKS
int setBit(int n, int index){ 
    //int set = (n | (1 << index )); // learned from: https://www.geeksforgeeks.org/all-about-bit-manipulation/
    // FURTHER REFERENCE: https://www.geeksforgeeks.org/modify-bit-given-position/
    int mask = 1 << index;
    int x = ((n & ~mask) | 1 << index);
    return x; 
}

// WORKS
int clearBit(int n, int index){
    int clear = (n & ~(1 << index)); // learned from: https://stackoverflow.com/questions/47981/how-to-set-clear-and-toggle-a-single-bit
    return clear; 
    //cout << "Binary number after clearing bit at index " << index << ": " << clear << endl; 
}
 
int main(){
    int n, index; 
    cout << "Please enter an integer for conversion!" << endl; 
    cin >> n; // taking in a user inputted value for n
    cout << "Please enter an Index!" << endl; 
    cin >> index; // taking in a user inputted value for index. 

    cout << "Binary representation of " << n << " is "; 
    decToBin(n);

    getBit(n, index);
    //setBit(n, index);
    cout << "Binary number after setting a bit at index " << index << ": ";
    decToBin(setBit(n, index));
    //cout << "\n";
    cout << "Binary number after clearing bit at index " << index << ": ";
    decToBin(clearBit(n, index));

    return 0; 
}