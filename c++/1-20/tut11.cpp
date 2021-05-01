// pointers-> data type holds the address of other data type/other variables address

#include <iostream>
using namespace std;

int main()
{
    // what is a pointer  -> data type holds the address of other data type/other variables address
    int a = 3;
    int *b = &a;
    // int * means a variable that holds address of integer variable and make it equal to address of a;
    // a value
    // &a address of operator
    // & -> address of operator  *-> dereferance oprator
    // as all these program consume a space in ram .. specially variables that hold their particular adress
    // cout << &a << " " << b << endl;
    // both will be same
    // for fetching the value of an address * comesinto picture called as value of operator
    // cout << *b << endl;
    //3

    // 0x6feb8
    // pointers arithmetic also exist

    // pointer to pointer
    int **c = &b;
    cout << &b << " " << c << endl;
    //address of b
    cout << *c << " " << **c;
    // address of c and value at c

    return 0;
}