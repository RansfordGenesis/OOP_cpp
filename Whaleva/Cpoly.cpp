#include <iostream>
using namespace std;

class CPolygon {
protected:
 int width, height;
public:
 void set_values(int a , int b){
    width = a, height = b;
 }
    virtual int area(void)=0;
    void printArea(){
        cout << "Area: " << this->area() << endl;
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


int main() {
 
  int array_size = 100;
  CPolygon *polygonArray[array_size];
 
  int n = 0;
 
  do {
    int res = 0;
 
    cout << "Which object do you want to create?\n";
    cout << "1. Rectangle\t2. Triangle\t3. Square\n\n->";
 
    float default_value = 10;
 
    if (res == 1) {
 
      CRectangle rectangle = *new CRectangle;
 
      rectangle.setValues(default_value, default_value);
 
      polygonArray[n] = &rectangle;
    } else if (res == 2) {
  
      CTriangle triangle = *new CTriangle;
 
      triangle.setValues(default_value, default_value);
 
      polygonArray[n] = &triangle;
    } else if (res == 3) {
 
      CSquare square = *new CSquare;
 
      square.setValues(default_value, default_value);
 
      polygonArray[n] = &square;
    } else {
      cout << "Not a valid input, try again!\n";
    }
  } while ( n < array_size);
 
 
  return 0;
}
