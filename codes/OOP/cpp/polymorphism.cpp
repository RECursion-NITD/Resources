//A call to a member function causes a different function to be executed depending on the type of object that invokes the function.
#include<bits/stdc++.h>
using namespace std;

class Shape {
protected:
    int width, height;
public:
    Shape(int w, int h) {
        width = w;
        height = h;
    }
    virtual void print_area() {
        cout << "Shape undefined\n";
    }
};

class Rectangle: public Shape {
public:
    Rectangle(int w, int h): Shape(w, h) {};
    void print_area() {
        cout << width*height << endl;
    }
};

int main( )
{
    Shape *shape;
    Rectangle rect(5, 7);
    shape = &rect;
    shape->print_area();
   return 0;
}
