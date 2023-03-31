//Function to convert height in cm to ft
#include <iostream>
using namespace std;


inline float cm_to_ft(float centimeter){
    return centimeter * 0.0328084;
}

int main(){
    float centimeter;
    cout << "Enter height in cm: \n";
    cin >> centimeter;

    cout << "Your height in ft is: " << cm_to_ft(centimeter) << endl;
    
    return 0;
}