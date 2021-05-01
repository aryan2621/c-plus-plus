// structure and union

// structure->to combine the variables of different data types
// user defined datatypes that helps in making it a container of differnt data types

#include <iostream>
using namespace std;

struct employee
{
    int eId;
    char favChar;
    float salery;
};

// typedef -> to make an alias name
//tyepedef struct employee
// {
//     int eId;
//     char favChar;
//     float salery;
// } ep;

// now you can just initialise by

// union -> same as struct but provide better memory management
// typedef -. rename the existing datatype.
union player
{
    int rice;     // 4
    char car;     // 1
    float pounds; //4
};

//it allocates the memory according to the variable max size
// and then makes it to get shared among the various things

int main()
{
    struct employee harry;
    struct employee rohan;
    union player m1;
    m1.car = 'c';
    m1.pounds = 2.4;
    m1.rice = 3;

    // we get last one as accurate while other as garbage value;

    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salery = 400;
    // cout << harry.eId << " " << harry.favChar << " " << harry.salery << endl;

    enum Meal
    {
        a,
        b,
        c
    };
    cout << a << " " << b << " " << c << " " << endl;
    // 0 1 2

    return 0;
}

// enum