// function templates

#include <iostream>

using namespace std;

// float funcAv(int a, int b)
// {
//     return (a + b) / 2.0;
// }
// float funcAv2(int a, float b)
// {
//     return (a + b) / 2.0;
// }
template <class T1, class T2>
float funcAv2(T1 a, T2 b)
{
    return (a + b) / 2.0;
}

int main()
{
    // cout << funcAv(2, 3) << endl;
    // cout << funcAv(2, 4) << endl;
    //to prevent this redeifinition of functions.
    // cout << funcAv2(2, 3) << endl;
    // cout << funcAv2(2, 4) << endl;

    cout << funcAv2(3, 5);

    return 0;
}