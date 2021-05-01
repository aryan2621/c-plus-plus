// friend functions
#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // friend function declaration
    friend Complex sumComplex(Complex c1, Complex c2);
    void printNumber()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }
};

// a friend function
// its not will become the member function
// c.sumComplex will not work;

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber(o1.a + o2.a, o1.b + o2.b);
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 2);
    c2.setNumber(2, 3);
    c1.printNumber();
    c2.printNumber();
    sum = sumComplex(c1, c2); // -3
    sum.printNumber();
    return 0;
}

// properties of friend functions

/*
Not in scope of class.
it cant be called from objects of class(-3)
generally arguments as objects.
can be declare inside public or private,both .
cant access members directlty by thier names .

*/