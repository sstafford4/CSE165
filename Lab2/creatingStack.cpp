#include "Stack.h"// including heder for linking 
#include <iostream>
#include <stack> 

using namespace std;


int main(int argc, char* argv[]){
    
    int n;
    double m; 
    Stack doubles;
    doubles.initialize();

    cout << "Enter size" << endl; // including this for output purposes
    cin >> n; 
    for (int i = 0; i < n; i++){
        cin >> m; // taking in user input for the 
        doubles.push(new double(m));
        // to print: pop() everything one by one. When  you pop them, they will return void*, so you ned to typecast them as doubles. 
    }
    cout << "\n"; 
    // this prints the contents of the stack top down. It also currently prints Empty Stack regardless. 
    while (doubles.peek() != nullptr){
       cout << *static_cast<double*>(doubles.pop()) << endl; // holy shit it works
    }

    doubles.cleanup();

    return 0; 
}