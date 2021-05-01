// c++ friend examples
#include <iostream>

using namespace std;

class Y;

class X
{
    int data;

public:
    friend void add(X, Y);
    void setValue(int value)
    {
        data = value;
    }
};

class Y
{
    int num;

public:
    friend void add(X, Y);
    void setData(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "Sum data " << o1.data + o2.num;
}

int main()
{
    X a1;
    a1.setValue(3);

    Y a2;
    a2.setData(3);

    add(a1, a2);
    return 0;
}