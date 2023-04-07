#include <iostream>
using namespace std;

class CPolygon {
protected:
 int width, height;
public:
 void set_values(int a , int b){
    width = a, height = b;
 }
    virtual int area(void){
        return 0;
}
};

class CRectangle : public CPolygon
{public:
    int area(){
        return width * height;
    }
};

class CTriangle : public CPolygon
{public:
    int area(){
        return width * height / 2;
    }
};