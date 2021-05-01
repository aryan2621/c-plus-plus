// array -> collection of items of similar types store in contiguous memory locations
// sometimes a simple variable is not enough to hold the data
// marks of 400 students and for that we cant afford the innitialisation of 400 variables

// |  |  |  |  |
// int marks[200];
// an array that can store the 200 variables of integer types
// access by marks[0]

#include <iostream>
using namespace std;

int main()
{
    // int marks[6];
    int marks[6] = {23, 45, 67, 78};
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;
    // cout << marks[5] << endl;

    int age[4];
    age[0] = 62;
    age[1] = 52;
    age[2] = 42;
    age[3] = 12;

    //printing with loop
    for (int i = 0; i < 6; i++)
    {
        // cout << " the value of marks" << marks[i] << endl;
        /* the indexes that are uninitialised will get 0 ultimatelty */
    }

    // the value of an array element can also be changebale
    // the indexes that are uninitailised will get to 0;

    int *p = marks;
    cout << "the value of marks" << *p << endl;
    cout << "the value of marks" << *(p + 1) << endl;
    cout << "the value of marks" << *(p + 2) << endl;
    cout << "the value of marks" << *(p + 3) << endl;


    // value and also increment 
    cout << *(p++) << endl;
    cout << *(++p) << endl;
    return 0;
}

// pointers and array

// in array name is address of first element
// &name is nothing !!!!
// p=marks -> address of the first element
// p++ means indication to the second element
// *(p++) means value of second element

// its icrement depends on the data type
// new_addr =addcurr + i*sizeof_datatype