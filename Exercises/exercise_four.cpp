//four function calculator using switch case

#include <iostream>
using namespace std;

int main(){
    char ope, option;
    float num1, num2;
    
    do{
        cout << "Enter first integer, operator and second integer\n";
        cin >> num1 >> ope >> num2;
    
        switch(ope)
        {
            case '+':
            cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
            break;

            case '-':
            cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
            break;

            case '*':
            cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
            break;

            case '/':
            cout << "The quotient of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
            break;
        }
        cout << "Do you want to calculate again? y or n \n";
        cin >> option;
    }while (option == 'y');
    
    return 0;
}
