/* Imagine a publishing company that markets both book and audiocassette versions of its
works. Create a class publication that stores the title (a string) and price (type float)
of a publication. From this class derive two classes: book, which adds a page count (type
int), and tape, which adds a playing time in minutes (type float). Each of these three
classes should have a getdata() function to get its data from the user at the keyboard,
and a putdata() function to display its data.
Write a main() program to test the book and tape classes by creating instances of them,
asking the user to fill in data with getdata(), and then displaying the data with putdata(). */

// publication class and derived classes
#include <iostream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////
class publication
// base class
{
private:
string title;
float price;
public:
void getdata()
{
cout << “\nEnter title: “; cin >> title;
cout << “Enter price: “; cin >> price;
}
void putdata() const
{
cout << “\nTitle: “ << title;
cout << “\nPrice: “ << price;
}
};
////////////////////////////////////////////////////////////////
class book : private publication
// derived class
{
private:
int pages;
public:
void getdata()
{
publication::getdata();
cout << “Enter number of pages: “; cin >> pages;
}
void putdata() const
{
publication::putdata();
cout << “\nPages: “ << pages;
}
};
////////////////////////////////////////////////////////////////
class tape : private publication
// derived class
{
private:
float time;
public:
void getdata()
{
publication::getdata();
cout << “Enter playing time: “; cin >> time;
}
void putdata() const
{
publication::putdata();
cout << “\nPlaying time: “ << time;
}
};
////////////////////////////////////////////////////////////////
int main()
{
book book1;
// define publications
tape tape1;
book1.getdata();
tape1.getdata();// get data for them
book1.putdata();
tape1.putdata();
cout << endl;
return 0;
}
