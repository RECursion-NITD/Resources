//Specifying more than one definition for a function name or an operator in the same scope.

#include<bits/stdc++.h>
using namespace std;

class A
{
   public:
      void print(int i) {
        cout << "Printing int: " << i << endl;
      }
      void print(double  f) {
        cout << "Printing float: " << f << endl;
      }
};

class Complex
{
   public:
      int real, imag;
      Complex operator+(const Complex& z)
      {
         Complex c;
         c.real = this->real + z.real;
         c.imag = this->imag + z.imag;
         return c;
      }
};
int main( )
{
   Complex z1, z2, z3;
   z1.real = 6;
   z1.imag = 7;
   z2.real = 5;
   z2.imag = 3;
   z3 = z1 + z2;
   cout << z3.real << " + i*" << z3.imag;
   return 0;
}
