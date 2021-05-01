// recursion-> calling  itself untill the base condtion is reached
// base condition is must

#include <iostream>
using namespace std;

int fact(int p)
{
    if (p <= 0)
        return 1;
    return p * fact(p - 1);
}


int fabo(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return fabo(n - 1) + fabo(n - 2);
}

int main()
{
    cout << fact(4) << endl;
    cout << fabo(4);
    return 0;
}