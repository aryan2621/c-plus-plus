// pointers to derive class

#include <iostream>

using namespace std;

class Base
{

public:
    int base_var;
    void display()
    {
        cout << "Displaying base class varialble " << base_var << endl;
    }
};
class Derive : public Base
{
public:
    int derive_var;
    void display()
    {
        cout << "Displaying base class varialble" << base_var << endl;
        cout << "Displaying derive class varialble" << derive_var << endl;
    }
};
int main()
{
    Base *base_pointer;
    Base obj_base;
    Derive obj_derive;
    base_pointer = &obj_derive;

    base_pointer->base_var = 34;
    // will show of base class even having the poinitng to derive class.
    // this is called late bindng that is the pointer get binded to base class display.
    // cant access to derive class

    // base_pointer-> derive_var=166;
    // this will show the error.
    // base_pointer->display();

    Derive *derive_class_pointer;

    derive_class_pointer = &obj_derive;
    derive_class_pointer->derive_var = 300;
    derive_class_pointer->display();

    return 0;
}