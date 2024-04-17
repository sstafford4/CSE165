#include <iostream>
#include "Vec.h"
#include "Rect.h"
#include <vector>

using namespace std;


int main(){
    float x, y, w, h; // for the rectangle
    float a, b; // for the points 
    vector<Rect> arr; 
    Rect rect;

    cout << "Type 4 floats to define a rectangle" << endl;  

    while (cin >> rect.x >> rect.y >> rect.w >> rect.h){
        if (rect.x < 0 && rect.y < 0 && rect.w < 0 && rect.h < 0){
            break;
        }
        arr.push_back(rect);
        cout << "Type 4 floats to define the next rectangle" << endl; 
    }
    
    cout << "Type 2 floats to define a point" << endl; 
    while (cin >> a >> b){
        if (a == -99.0 && b == -99.0){
            break;
        }
        Vec point(a,b);
        for (int i = 0; i < arr.size(); ++i){
            if (arr[i].contains(point)){
                cout << "The point is INSIDE rectangle " << i << endl; 
            }
            else{
                cout << "The point is OUTSIDE of rectangle " << i << endl; 
            }
        }
        cout << "Type 2 floats to define the next point" << endl;
    }

    cout << "Finished!" << endl; 
    return 0; 
}