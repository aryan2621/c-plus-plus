// destructors ->free kar deta hai us memory ko jo object leke baitha rhta hai
// program se bahar jane k bawjood
// no argument no return value
// run by itself for cleanup

#include <iostream>

using namespace std;

int count = 0;
class Num
{

public:
    Num()
    {
        count++;
        cout << "This is time when constructor is called for the object is called " << count << endl;
    }
    ~Num()
    {
        cout << "This is the time When destructor is called for object of " << count << endl;
        count--;
    }
};

int main()
{
    cout << "Inside main function " << endl;
    cout << "Createing first oject " << endl;

    Num n1;
    {
        cout << "Entering this block " << endl;
        cout << "Craeting more objects " << endl;
        Num n2, n3;
        cout << "Exiting this block " << endl;
    }
    cout << "Back to main" << endl;

    return 0;
}