// function in c++;
// a block of code that are allowed to perform a specific task
// in classes they called as methods
// helps in reusablility

// we provide them parameters and they return values
#include <iostream>

using namespace std;

// not necessary to return every time
// for that we make return type void

// return type name-of-function(arguements)
// {

// }
int Multiply(int a, int b)
{

    return a * b;
}
void MultiplyandDisplay(int a, int b)
{
    int result = a * b;
    cout << result << endl;
}

int main()
{
    // int res = Multiply(9, 6);
    // cout << res << endl;

    // int res2 = Multiply(90, 6);
    // cout << res2 << endl;

    // int res3 = Multiply(9, 698);
    // cout << res3 << endl;

    MultiplyandDisplay(8, 7);
    MultiplyandDisplay(8, 67);
    MultiplyandDisplay(8, 47);

    return 0;
}

// whenever we do the function call we actually do the
// pushing of that function call in stack and from that one by one the function excecute
// jumping of memory 
// focus on DRY
// main function is not having to must return policy

