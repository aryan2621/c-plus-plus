// this pointer->
#include <iostream>

using namespace std;
class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
        //this will show the garbage value
        // but program not show the error
        // you can return the object through this 
        // which is a pointer
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    // this is a keyword which is a pointer which points to the
    // which is being created
    // same in like as in javascript.
    
    A a;
    a.setData(3);
    a.getData();
    return 0;
}