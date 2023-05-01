#include <iostream>
using namespace std;

const int LEN = 80;

class employee{
    private:
        char name[LEN];
        unsigned long number;

    public:
        void getdata(){
            cout << "Enter last name: " << endl; cin >> name;
            cout << "Enter number: " << endl;cin >> number;
        }
        void putdata(){
            cout << "Name: " << name << endl;
            cout << "Number: " << number << endl;
        }
};

class manager : public employee{
    private:
    char title[LEN];
    double club_dues;
    public:
    void getdata(){
        employee::getdata();
        cout << "Input your title: " << endl; cin >> title;
        cout << "Enter your club " << endl; cin >> club_dues;
    }
    void putdata(){
        employee::putdata();
        cout << "Title: " << title << endl;
        cout << "Club Dues: " << club_dues << endl;
    }
};

class scientist : public employee{
    private:
    int pubs;
    public:
    void getdata(){
        employee::getdata();
        cout << "Enter number of publications: " << endl; cin >> pubs;
    }
    void putdata(){
        employee::putdata();
        cout << "Number of Publication: " << endl;
    }
};

class labourer : public employee{

};

int main(){
    manager m1, m2;
    scientist s1;
    labourer l1;

    cout << "Enter manager 1 details" << endl;
    m1.getdata();

    cout << "Enter manager 2 details" << endl;
    m2.getdata();

    cout << "Enter scientist details" << endl;
    s1.getdata();

    cout << "Enter labourer details" << endl;
    l1.getdata();

    cout << "Details of manager 1" << endl;
    m1.putdata();

    cout << "Details of manager 2" << endl;
    m2.putdata();

    cout << "Details of scientist" << endl;
    s1.putdata();

    cout << "Details of labourer" << endl;
    l1.putdata();

    return 0;
}
