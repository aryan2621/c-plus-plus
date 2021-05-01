#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    // parameteried constructor
    Complex(int, int);


    void printNumber()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }
};

// parametried constructor-. passing of some argument
Complex::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    Complex a(4, 6);
    // implicit call initialising with declaration

    Complex b = Complex(5, 6);
    // explicit call

    a.printNumber();
    b.printNumber();
    return 0;
}