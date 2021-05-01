// ternary oprerators in c++

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = 5, y;
    y = x = 5 ? 10 : 16;
    cout << y << endl;

    return 0;
}