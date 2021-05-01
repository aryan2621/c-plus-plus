// function overloading -> react different according to passed condition

#include <iostream>
using namespace std;

int add(int a, int b, int c)
{
    return a + b + c;
}

int add(int a, int b)
{
    return a + b;
}
// both function will chose will we have to excecute by thier own
//  function overloading -> nam ek kam alag alag

// compiler match prototype and then decide the correct function;

double volumne(double r, int h)
{
    return (3.14 * r * r * h);
}

int volumne(int a)
{
    return a * a * a;
}
int volumne(int l, int b, int h)
{
    return l * b * h;
}

int main()
{
    cout << add(9, 7) << endl;
    cout << add(3, 4, 5) << endl;
    cout << "the volumne of cuboid " << volumne(2, 3, 4) << endl;
    cout << "the volumne of cube " << volumne(2) << endl;
    cout << "the volumne of cylinder " << volumne(2, 3) << endl;

    return 0;
}