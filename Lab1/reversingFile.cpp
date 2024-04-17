#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h> // included to hae access to the reverse() method

using namespace std;

// COMPLETED
int main()
{
	vector<string> v;
    ifstream in( "code.cpp" ); // creating a variable of class type ifstream 
    // connected ifstream variable "in" to file.txt for input into the file.
    // open for reading. 

    string s;
    while (getline(in, s)){ // getline() reads the line until it discovers a \n (new line).
    //while (in >> s){ 
        v.push_back(s); 
    }

	reverse(v.begin(), v.end()); // used to reverse the order of the vector. 

    for (int i = 0; i < v.size(); i++) {
		int j = v.size(); // this is for the purpose of reversing the line numbers.
        cout << (j - i) << ": " << v[i] << endl;
    }
}