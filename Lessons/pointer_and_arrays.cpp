#include <iostream>
using namespace std;

int main()
{
//array
    int intarray[5] = { 31, 54, 77, 52, 93 };
    for(int j=0; j<5; j++)
    cout << *(intarray+j) << endl;
    return 0;
}