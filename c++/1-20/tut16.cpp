// inline function // default argument and constant arguements

#include <iostream>

//inline functions->these are the function thats definition will replace the call during the compile time
// instead of the normal function which on call go to and perfom definition and then return

// just place inline here
// use only where function is called more times
// inline only when function is small
// never use in recusrion,static ,in loop and switch

// static means retaining of values in multiple  function calls

// default arguements ->
// always written on rightest

// constant arguments -> prevent from change
// the passing arguments
int strlen(const char *p){

}

int sub(int a, float fac = 1.04)
{

    return a * fac;
}

int product(int a, int b)
{
    // static int c = 0;
    // this excecute only once
    // c = c + 1;
    // next time it wont change
    return a * b;
}

using namespace std;

int main()
{
    // cout << product(7, 9) << endl;
    // it will default take the second arguement as 1.04;
    cout << sub(200) << endl;
    cout << sub(200, 8.9) << endl;

    return 0;
}