// variables -> contaners to store data;
// various types of data typesare int /char /float / double/boolean
// int sum =34; that is sum is a container that hold only the integer type value;

// syntax data_type variable_name =value;
// based on scope classifed as local variable and global variable.

// scope -> region in code where the exsitance of variable is valid
// based on scope

// local -> inside a braces of any function ;
// global -> outside any function and can  be accesed from anywhere

// data types -> define the types of values that a varables can  hold
// types are

// build in     user defined    derieved
// build in -> int / float /char / double / bool

// user defined datatypes  -> struct enum and union

// derived data types -> array / pointerrs and / functions

#include <iostream>
using namespace std;

int glow = 8;
void sum()
{
    int a;
    cout << glow;
}

int main()
{
    int a = 4, b = 36;
    float d = 3.14;
    char m = 'h';
    int glow = 78;
    bool istrue = true;
    glow = 44;
    cout << "of  the sum ";
    sum();
    cout << "of the main" << glow;

    cout << istrue;
    cout << "a ->\n"
         << a << "b->"
         << b
         << d << m;

    return 0;
}
// \n back slash character for the line break;
// local variable take precedence over the global variable

// rules name should be in 1 to 255 characters 
// can start with alphabet and _
// also can contain letters and numebrs
// case sensitive
// so space and special characters
// cant use the reserved word