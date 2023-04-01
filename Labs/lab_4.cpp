#include <iostream>
using namespace std;

class Quadrilateral
{
    private:
    int x, y;

    public:
    void set_values(int x, int y){
        x = x;
        y = y;
    }
    float area(){
        return (x * y);
    }


};