/* Write a program that reads a group of numbers from the user and places them in an array
of type float. Once the numbers are stored in the array, the program should average
them and print the result. Use pointer notation wherever possible. */

// finds average of numbers typed by user
#include <iostream>
using namespace std;
int main()
{
float flarr[100];
char ch;
int num = 0;
do
{
  cout << “Enter number: “;
//get numbers from user
cin >> *(flarr+num++);
//until user answers ‘n’
cout << “
Enter another (y/n)? “;
cin >> ch;
}
while(ch != ‘n’);
float total = 0.0;
//total starts at 0
for(int k=0; k<num; k++)
//add numbers to total
total += *(flarr+k);
float average = total / num;
//find and display average
cout << “Average is “ << average << endl;
return 0;
}
