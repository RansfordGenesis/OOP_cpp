#include <iostream>
using namespace std;

int main(){
    cout<<"Hello World"<<endl;

    int number = 17785;

    char message[100] = "Welcome to this class!";
    cout << message << endl;

    float num = -56.1427;

    string mix = "5262778y";

    int a = 5, b = 5, c = 5;

    bool obj = true;

//Program that asks for age and responds with year of birth
    int age, year;
    cout << "Enter Your Age: " << endl;
    cin >> age;
    year = 2023-age;
    cout << "Your Year of Birth is " << year << endl;

//integer array
    int arr [6] = {67, 71, 54, 43, 82, 90};
    arr [2] = 75;
    int AppliedElectricity = arr[4];

    return 0;
}