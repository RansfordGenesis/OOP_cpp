//Function that takes a double and int and perform power on it

#include <iostream>
using namespace std;

double power(double n, int p = 2);
int main()
{
    double n;
    int p;
    cout << "Enter number\n";
    cin >> n;
    cout << "Enter pow\n";
    cin >> p;
    
    double answer = power(n, p);
    cout << "The power is " << answer << endl;

    return 0;
}
double power(double n, int p)
{
    double final = 1.0;
    for (int i=1; i<=p; i++){
         final *= n;
    }
    return final;
}