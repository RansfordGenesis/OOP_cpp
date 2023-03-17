#include <iostream>
using namespace std;

int main(){
    int option;
    float fahrenheit, celcius, value;
    cout << "Welcome to my Temperature Converter \n";
    cout << "Select an option \n";
    cout << "1. Fahrenheit to Celsius \t 2. Celsius to Fahrenheit\n";
    cin >> option;


    if (option == 1)
    {
        cout << "Enter Farenheit to convert: " << endl;
        cin >> value;

    float celsius = (value - 32) * 5/9;
    cout << "The equivalent in Celsius is: " << celsius << endl;
    }


    return 0;
}