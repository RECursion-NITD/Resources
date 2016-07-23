//Data abstraction refers to, providing only essential information to the outside world and hiding their background details

//Encapsulation is an Object Oriented Programming concept that binds together the data and functions that manipulate the data,
//and that keeps both safe from outside interference and misuse.
#include<bits/stdc++.h>
using namespace std;

class Shape {
    int width, height;
public:
    int getWidth() {
        return width;
    }
    int getHeight() {
        return height;
    }
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
};

int main() {
    Shape s;
    s.setHeight(4);
    s.setWidth(6);
    cout << s.getHeight() << " " << s.getWidth();
    return 0;
}
