#include <iostream>
using namespace std;

int main(){
//Program that coverts number of gallons to cubic feet.
    float gallons;
    const float value = 7.481;
    
    cout << "Enter gallons to convert: ";
    cin >> gallons;

    float equivalent = gallons / value;

    cout << "The equivalent in cubic feet is " << equivalent << endl;

    return 0;
}