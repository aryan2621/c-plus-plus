// call by value and call by reference

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// wont swap
// so use the pointer and pass the address ()call by refernece using poinetrs
void swap(int *m, int *n)
{

    int temp = *m;
    *m = *n;
    *n = temp;
}

// call by refernece using refeence operator
// this now will point the values which make change possible
void swapref(int &m, int &n)
{

    int temp = m;
    m = n;
    n = temp;
}



int main()
{
    int a = 9, b = 10;
    // cout << sum(3, 5) << endl;

    // as we are passing now the address which is unique and
    //on basis of address  the value is altererd

    // swap(&a, &b);

    // now it will get 10,9

    //   swap(a, b);
    // this will not make 10,9  as on passing the  a b on the function
    // it will  take the copy of the a and b to definition but a b wont get effected
    // and thats y swap wont work

    // cout << swap(3, 6) << endl;

    swapref(a, b);

    cout << a << " " << b;
    return 0;
}