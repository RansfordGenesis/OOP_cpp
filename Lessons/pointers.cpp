#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    int *p1, *p2, *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    *p1 = 10;
    *p2 = 20;
    *p3 = 30;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "p1 = " << p1 << endl;
    cout << "p2 = " << p2 << endl;
    cout << "p3 = " << p3 << endl;
    cout << "*p1 = " << *p1 << endl;
    cout << "*p2 = " << *p2 << endl;
    cout << "*p3 = " << *p3 << endl;
    return 0;
}