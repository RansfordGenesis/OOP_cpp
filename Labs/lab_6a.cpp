//Function to find the largest number in a given array
#include <iostream>
using namespace std;

int max_num(int arr[], int n);
int main(){
    int numbers[5] = {15, 20, 60, 30, 5};
    cout << "The largest number is " << max_num(numbers, 5);

    return 0;
}
int max_num(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
