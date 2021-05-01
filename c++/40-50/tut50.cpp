// pointers to objects and arrow operators

#include <iostream>

using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << " and the imaginary part is " << imaginary << "i" << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    Complex c1;
    // Pointer to objects
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;

    // (*ptr).setData(1, 2);
    // the below method is simmilar as above
    // is pointer ko deference karke iska function run kro.

    // ptr->setData(3, 7);

    // (*ptr).getData();
    // ptr->getData();

    //Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(3, 7);
    ptr1->getData();

    (ptr + 1)->setData(9, 8);
    (ptr + 1)->getData();

    return 0;
}
