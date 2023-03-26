#include <iostream>
using namespace std;

//function to find the sum of the first n natural numbers.
int sum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the integer to sum up to: \n";
    cin >> n;

    cout << "Sum of the first " << n << "natural numbers is " << sum(n) << endl;
    
    return 0;
}

//Function to convert height in cm to ft
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

