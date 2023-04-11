/* Start with the publication, book, and tape classes of Exercise 1. Add a base class sales
that holds an array of three floats so that it can record the dollar sales of a particular
publication for the last three months. Include a getdata() function to get three sales
amounts from the user, and a putdata() function to display the sales figures. Alter the
book and tape classes so they are derived from both publication and sales. An object
of class book or tape should input and output sales data along with its other data. Write
a main() function to create a book object and a tape object and exercise their input/output
capabilities. */

// multiple inheritance with publication class
#include <iostream>
#include <string>
using namespace std;
////////////////////////////////////////////////////////////////
class publication
{
private:
string title;
float price;
public:
void getdata()
{
cout << “\nEnter title: “; cin >> title;
cout << “
Enter price: “; cin >> price;
}
void putdata() const
{
cout << “\nTitle: “ << title;
cout << “\n
Price: “ << price;
}
};
////////////////////////////////////////////////////////////////
class sales
{
private:
enum { MONTHS = 3 };
float salesArr[MONTHS];
public:
void getdata();
void putdata() const;
};
//--------------------------------------------------------------
void sales::getdata()
{
cout << “
Enter sales for 3 months\n”;
for(int j=0; j<MONTHS; j++)
{
cout << “
Month “ << j+1 << “: “;
cin >> salesArr[j];
}
}
//--------------------------------------------------------------
void sales::putdata() const
{
for(int j=0; j<MONTHS; j++)
{
cout << “\n
Sales for month “ << j+1 << “: “;
cout << salesArr[j];
}
}
////////////////////////////////////////////////////////////////
class book : private publication, private sales
{
private:
int pages;
public:
void getdata()
{
publication::getdata();
cout << “
Enter number of pages: “; cin >> pages;
sales::getdata();
}
void putdata() const
{
publication::putdata();
cout << “\n
Pages: “ << pages;
sales::putdata();
}
};
////////////////////////////////////////////////////////////////
class tape : private publication, private sales
{
private:
float time;
public:
void getdata()
{
publication::getdata();
cout << “
Enter playing time: “; cin >> time;
sales::getdata();
}
void putdata() const
{
publication::putdata();
cout << “\n
Playing time: “ << time;
sales::putdata();
}
};
////////////////////////////////////////////////////////////////
int main()
{
book book1;
// define publications
tape tape1;
book1.getdata();
tape1.getdata();// get data for publications
book1.putdata();
tape1.putdata();
cout << endl;
return 0;
}
