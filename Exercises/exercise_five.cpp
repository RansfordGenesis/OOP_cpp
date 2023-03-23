#include <iostream>
using namespace std;

class tollbooth
{
    private:
    unsigned int total_cars;
    double total_money;
    public:
    tollbooth() : total_cars(0), total_money(0)
    {}
    void payingCar(){
        total_cars += 1;
        total_money += 0.5;
    }
    void nopayCar(){
        total_cars += 1;
    }
    void display(){
        cout << "Total number of cars passes is " << total_cars << endl;
        cout << "Total money collected is " << total_money << endl;
    }





};
