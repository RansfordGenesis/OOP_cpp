//Program that implements classes to do tollbooth at a bridge
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
    void display() const{
        cout << "Total number of cars passed is " << total_cars << endl;
        cout << "Total money collected is " << total_money << endl;
    }

};

int main(){
    tollbooth gate1;
    char opt;

    cout << "Welcome to Ayeduasi tollbooth \n ----------------------------------------------\n";
    cout << "Select an option below: \n 1. Y - Paying car \n 2. N - Non-paying car \n 3. ESC to exit\n";

    do{
        cin >> opt;
        if (opt == 'Y' || opt == 'y')  gate1.payingCar();
        if (opt == 'N' || opt == 'n')  gate1.nopayCar();

        }while (opt != 27);
    
    gate1.display();

    return 0;
}
