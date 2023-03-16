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


//Program that coverts degrees Celsius to degrees Fahrenheit.

    float celsius;
    const float val = 1.8;
    
    cout << "Enter celsius to convert: " << endl;
    cin >> celsius;

    float fahrenheit = (celsius * val) + 32.0;
    cout << "The equivalent in fahrenheit is: " << fahrenheit << endl; 

    return 0;
}