// header files in c++;

// helps in getting some inbuilt functions.
// provide us the base declaration and data types and functions.
// suppose we have created a function in one place and use them in the other place
// but c++ doesnt know we have to tell them and the one way is using the header file system.
#include <iostream>
#include "Log.h"
using namespace std;


int main()
{
    Log("Hello world");
    Initlog();
    return 0;
}
