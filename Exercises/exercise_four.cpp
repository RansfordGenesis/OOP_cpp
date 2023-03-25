//four function calculator using switch case

#include <iostream>
using namespace std;

int main(){
    char ope;
    float num1, num2, option;
    
    do{
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
        cout << "Do you want to calculate again? y or n \n";
        cin >> option;
    }while (option == y);
    
    return 0;
}
