//Pointers new and delete keywords

#include <iostream>

using namespace std;

int main()
{
    int a = 4;
    int *p = &a;
    cout << "The value of a is " << *p << endl;

    // new-> dynamc initialisation
    int *ptr = new int(40);
    cout << "The value at the address ptr is " << *(ptr) << endl;

    //for a continuous like an array

    int *arr = new int[4];
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 10;
    delete[] arr;
    //free out memory for dynmaically allocated array

    cout << "The value of " << arr[0] << endl;
    cout << "The value of " << arr[1] << endl;
    cout << "The value of " << arr[2] << endl;
    cout << "The value of " << arr[3] << endl;

    // delete operator

    return 0;
}