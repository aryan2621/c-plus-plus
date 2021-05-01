// constructor overloading

#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    //more than one constructor definition
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void displayComplex(void)
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    Complex c1(9, 6), c2(6);
    c1.displayComplex();
    c2.displayComplex();
    return 0;
}