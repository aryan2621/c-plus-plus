#include <iostream>

using namespace std;

// data hiding is not available in structure.
// accessible by anyplace.
// function is not placable in structure.
// data + function + security => class
class Employee
{
private:
    int a, b, c;
    // only functions of this now can access these values.

public:
    int d, e;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "value of a " << a << endl;
        cout << "value of b " << b << endl;
        cout << "value of c " << c << endl;
        cout << "value of d " << d << endl;
        cout << "value of e " << e << endl;
    }
};

// defning function outside that;
void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee harry;
    harry.setData(1, 2, 3); //-1
    harry.d = 5;
    harry.e = 9;
    harry.getData();
    // but harry.a or b or c not accesible
    // these can be read or write only by their function
    // -1 wala dekho

    return 0;
}