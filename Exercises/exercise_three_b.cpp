//Function that takes two integers by reference and sets the smallest to zero

#include <iostream>
using namespace std;

void zeroSmaller(int&, int&);

int main(){
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;
    
    zeroSmaller(a, b);

    return 0;
}

void zeroSmaller(int& a, int& b)
{
    if (a < b) a = 0;
    else b = 0;
    cout << a << ", " << b << endl;
}