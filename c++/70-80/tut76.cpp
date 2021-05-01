// exception handling;

#include <iostream>
using namespace std;
int main()
{

    // try
    // {
    //     // exception -> way of catching the error

    //     int momsAge = 80;
    //     int sonAge = 200;
    //     if (sonAge > momsAge)
    //         throw 99;
    //     // throwing of the error.
    // }
    // catch (int x)
    // {
    //     // catching of the error
    //     cout << "Th son cant be less old than mom " << x << endl;
    // }

    try
    {
        int num1, num2;
        cout << "Enter the numbers " << endl;
        cin >> num1;
        cout << "Enter the numbers " << endl;
        cin >> num2;
        if (num2 == 0)
        {
            throw;
        }
        cout << "The anwers is ->" << num1 / num2 << endl;
    }
    catch (int x)
    {
        cout << "You cant divide by the " << x << endl;
    }

    return 0;
}