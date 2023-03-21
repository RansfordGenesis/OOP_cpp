#include <iostream>
using namespace std;

class smallobj
{
    private:
    int carNumber;
    int carYears;
    float cost;

    public:
    void setdata(int a, int b, float c)
    {
        carNumber = a;
        carYears = b;
        cost = c;
    }
    void showdata()
    {
        cout << carNumber << endl;
        cout << carYears << endl;
        cout << cost << endl; 
    }

};

int main()
{
    smallobj s1, s2, s3;
    int a, b;
    float c;
    cin >> a >> b >> c;
    s1.setdata(a, b, c);

    s1.showdata();

    return 0;
}