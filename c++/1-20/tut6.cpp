// referencing and typecasting

#include <iostream>

using namespace std;

int c = 10;
int main()
{

    int a = 9, b = 8, c;
    c = a + b;
    cout << c << endl;
    cout << ::c << endl;
    // global variable access is by :: placing this
    // called as scope resolution operators
    // by default 34.6 will be a double in front of compiler
    // but by writing as 34.6f we can make as a float
    //  float d=9.8;
    // long double e=8.6 ; both will treat as the float in front of compiler
    // sizeof(34.5f) -> 4; taken float
    // sideof(34.5l)-> 32; taken long double
    // sizeof(34.5)-> 8; taken double

    // reference variable
    // refernce variable ... means admi ek nam aneke
    float aabar = 9;
    float &a_other = aabar;
    cout << aabar << endl;
    cout << a_other << endl;

    // typecasting -> changing the one datatype to other datatype
    // (float)a or by float(a)
    int v = 9;
    cout << float(v);

    return 0;
}