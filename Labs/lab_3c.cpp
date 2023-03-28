#include <iostream>
using namespace std;

int fibonacci(int n){
    int first_term = 0, second_term = 1, next_term = 0;
    next_term = first_term + second_term;
    while(next_term <= n){
        first_term = second_term;
        second_term = next_term;
        next_term = first_term + second_term;
    cout << next_term << ", " << endl;
    }
    return next_term;
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n) << ", " << endl;
    return 0;
}