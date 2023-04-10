#include <iostream>
using namespace std;

void centimize(double& v)
{
v *= 2.54;
//v is the same as var
}

int main(){


double var = 10.0;

cout << "var = " << var << " inches" << endl;
centimize(var);

cout << "var = " << var << " centimeters" << endl;
return 0;
}


