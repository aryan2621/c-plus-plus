// constructors -> class banane k sath
// hi ham unhe initialise karde
// bajay iske ki ham setvalue setdata jaise function use kare

//constructor->a sepcial member function with same name as of the clas
// use to initialsie the objects of class
//it runs automatically whenevr the objects is created.

#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);
    void printNumber(void)
    {
        cout << "The complex number is " << a << " +" << b << "i" << endl;
    }
};

Complex ::Complex(void)


// constructor have no return type
// constructor w/o parameter -. default constructor
// it should be declared inside public.
// automatically invoke
// anything inside constructor definition will print automatically
// no return type thats is cant return values.
// we cannot refer to their address



{
    a = 10;
    b = 20;
};

int main()
{
    Complex c, c2, c3;
    c.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}