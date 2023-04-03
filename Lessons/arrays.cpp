// gets four ages from user, displays them
#include <iostream>
using namespace std;

int main()
{
    int age[4];
    for(int j = 0; j<4; j++){
        cout << "Input an age: ";
        cin >> age[j];
    }
    for(int j = 0; j<4; j++)    cout << "Age entered: " << age[j] << endl;

    return 0;
}