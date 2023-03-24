#include <iostream>
using namespace std;

int main(){
    char ope;
    float num1, num2, answer;

    cout << "Enter first integer, operator and second integer\n";
    cin >> num1 >> ope >> num2;

    switch(ope)
    {
        case '+':
        cout << num1 + num2 << endl;
        break;

        case '-':
        cout << num1 - num2 << endl;
        break;

        case '*':
        cout << num1 * num2 << endl;
        break;

        case '/':
        cout << num1 / num2 << endl;
        break;
    }

    return 0;
}
