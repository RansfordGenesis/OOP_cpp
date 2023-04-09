#include <iostream>
using namespace std;

int main(){
//Body Mass Index Calculator

    float height, weight, bmi, height_m;
    cout << "Enter Height in cm" << endl;
    cin >> height;
    cout << "Enter Weight in kg" << endl;
    cin >> height;

    height_m = height / 100;
    cout << height_m << endl;
    bmi = weight / (height_m*height_m);
    cout << "Your BMI is " << bmi << endl;

    if (bmi < 18.5){
        cout << "You are underweight\n";
    }
    if (bmi >= 18.5 && bmi <= 24.9){
        cout << "Your weight is normal.\n";
    }
    if (bmi >= 25 && bmi <= 29){
        cout << "You are overweight.\n";
    }
    if (bmi >= 30 && bmi <= 39.9){
        cout << "You are obese.\n";
    }
    if (bmi > 40){
        cout << "You are morbidly obese.\n";
    }
    
    return 0;
}