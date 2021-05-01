//Ambuigity in inheritance.

#include <iostream>

using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you from fisrt class " << endl;
    }
};
class Base2
{
public:
    void greet()
    {
        cout << "How are you from second class " << endl;
    }
};

class Derive : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet();
    }
};

class P
{
public:
    void say()
    {
        cout << "Hello world from P" << endl;
    }
};

// Derve function overrite the base class if they share same name of function
class D : public P
{
    int a;

public:
    // void say()
    // {
    //     // cout << "Hello world from D" << endl;
    // }
};

int main()
{
    Base1 b1;
    Base2 b2;
    // b1.greet();
    // b2.greet();
    //Ambuigity 1
    Derive d;
    // d.greet();

    // This will show ambigous



    P p1;
    D d1;
    d1.say();
    p1.say();
    return 0;
}