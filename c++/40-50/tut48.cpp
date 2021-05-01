// initialistion list in constructors

#include <iostream>

using namespace std;

/*
Syntax for initialistion list

constructor (arguement-list): initialistion-section{
    assignment +other code;
    
}
*/
/*
class Test{
    int a;
    int b;
    public:
    Test(int i ,int j):a(i),b(j){
        constructor body
    }
}
*/

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : b(i), a(i+j)
    // this will create problem will hold garbage value.
    // as we initialised value of a first but taking b first 


    {
        cout << "Constructor is called " << endl;
        cout << a << endl;
        cout << b << endl;
    }
};

int main()
{
    Test t1(1, 3);

    return 0;
}