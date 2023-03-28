#include <iostream>
using namespace std;

//function to find the sum of the first n natural numbers.
int sum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter the integer to sum up to: \n";
    cin >> n;

    cout << "Sum of the first " << n << "natural numbers is " << sum(n) << endl;
    
    return 0;
}



