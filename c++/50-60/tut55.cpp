// virtual functions

#include <iostream>

using namespace std;

class Base
{

public:
    int base_var = 1;
    virtual void display()

    // virtual -> bhai jiska object ka address copy ki hai usi ka display run karo
    // default behaviour ko overwrite karke

    {
        cout << "Displaying base class varialble " << base_var << endl;
    }
};
class Derive : public Base
{
public:
    int derive_var = 1;
    void display()
    {
        cout << "Displaying base class varialble" << base_var << endl;
        cout << "Displaying derive class varialble" << derive_var << endl;
    }
};

int main()
{
    // actual binding of object with
    // compile time funtion occur at
    // with help of virtual you can have access of
    // derived things as well.
    //

    Base *base_class_pointer;
    Base obj_base;
    Derive obj_derive;
    base_class_pointer = &obj_derive;
    base_class_pointer->display();
    return 0;
}