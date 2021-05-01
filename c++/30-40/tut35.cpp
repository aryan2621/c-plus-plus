// copy constructor->
#include <iostream>

using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    {
        // copy constructor
        cout << "Copy constructor has been called" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "Number is " << a << endl;
    }
};
// copy constructor-> create copy of another object.
int main()
{
    Number z(8), x, z2;
    x.display();

    // n1 masala pass to z1.
    // when no copy constructor is found compiler provide its own copy constructor
    // copy constructor invoke

    Number z1(z); // copy construct involke
    z1.display();

    z2 = z; // copy constructor not invoke

    Number z3 = z; // copy constructor invoke

    // will not invoke in case jab object phle
    // se banke rakkha ho or app kewal assigning karre hoo

    return 0;
}