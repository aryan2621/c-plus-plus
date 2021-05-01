//constructor with default arguments

#include <iostream>

using namespace std;

class Simple
{
    int data1;
    int data2;

public:

    Simple(int a, int b = 9)
    // default argument as 9
    {
        data1 = a;
        data2 = b;
    }
    void printData()
    {
        cout << "Value is " << data1 << " " << data2 << endl;
    }
};

int main()
{
    Simple s1(2, 6), s2(3);
    s1.printData();
    s2.printData();
    return 0;
}