//Program that displays area of square and rectangle
#include <iostream>
using namespace std;

class Quadrilateral
{
    private:
    int x, y;

    public:
    void set_values(int a, int b){
        x = a;
        y = b;
    }
    inline int area(){
        return (x * y);
    }


};

int main(){

    Quadrilateral square, rectangle;

    square.set_values(10, 10);
    rectangle.set_values(5, 10);

    cout <<"The area of the square is: " << square.area() << endl;
    cout <<"The area of the rectangle is: " << rectangle.area() << endl;

    return 0;
}