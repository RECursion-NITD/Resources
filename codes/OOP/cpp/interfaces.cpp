//An interface describes the behavior or capabilities of a C++ class without committing to a particular implementation of that class.
#include<bits/stdc++.h>
using namespace std;

class Shape {
protected:
    int width, height;
public:
    virtual void print_area() = 0;
    void set_width(int w) {
        width = w;
    }
    void set_height(int h) {
        height = h;
    }
};

class Rectangle: public Shape {
public:
    void print_area() {
        cout << width*height << endl;
    }
};

class Triangle: public Shape {
public:
    void print_area() {
        cout << (width*height)/2 << endl;
    }
};

int main( )
{
    Rectangle rect;
    rect.set_height(5);
    rect.set_width(8);
    rect.print_area();
   return 0;
}
