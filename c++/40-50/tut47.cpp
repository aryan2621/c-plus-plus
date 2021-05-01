// constructor in derive class
/*
class B:Public A{

Base class constructor >  Derive class constructor;
order is ->First A() then B();
};

class A: public B,public C{
    order is-> B()-> then C() and then A();
};
case3:
class A:public B,virtual publc C{
order of excecution -> C() then B() then A();
};
*/

#include <iostream>

using namespace std;
class Base1
{
    int data;

public:
    Base1(int i)
    {
        data = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printDataBase1()
    {
        cout << "The value of data is " << data << endl;
    }
};

class Base2
{
    int data;

public:
    Base2(int i)
    {
        data = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printDataBase2()
    {
        cout << "The value of data is " << data << endl;
    }
};
class Derive : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derive(int a, int b, int c, int d) : Base2(a), Base1(b)
    // this order doesnt matter for calling of the constructors
    // but in deriving the order matters 

    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor" << endl;
    }
    void printDataDerived()
    {
        cout << "The value of derived values is " << derived1 << " " << derived2 << endl;
    }
};

int main()
{
    Derive hary(1, 2, 3, 4);
    // hary.printDataBase1();
    // hary.printDataBase2();
    hary.printDataDerived();



    return 0;
}