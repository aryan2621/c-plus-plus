// multiple inheritance->

#include <iostream>

using namespace std;

// syntax-> class derved :visiblity-mode base1,visibility-mode base2

class Base1
{
protected:
    int base1;

public:
    void set_base1(int a)
    {
        base1 = a;
    }
};
class Base2
{
protected:
    int base2;

public:
    void set_base2(int a)
    {
        base2 = a;
    }
};

class Derive : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of base 1 is " << base1 << " and the value of base2 is " << base2 << " and their sum is " << base1 + base2;
    }
};

int main()
{
    Derive d1;
    d1.set_base1(23);
    d1.set_base2(25);
    d1.show();
    return 0;
}