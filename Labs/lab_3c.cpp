// A function to generate the Fibonacci sequence up to a given number
#include <iostream>
using namespace std;

void fibonacci(int n){
    int first_term = 0, second_term = 1, next_term = 0;
    
    cout << first_term << ", " << second_term;
    
    next_term = first_term + second_term;
    
    while(next_term <= n){
        cout <<", " << next_term;
        
        first_term = second_term;
        second_term = next_term;
        next_term = first_term + second_term;
    }
    cout << endl;
}

int main(){
    int n;

    cout << "Enter a postive to number to generate fibonacci sequence: ";
    cin >> n;
    
    fibonacci(n);


    return 0;
}