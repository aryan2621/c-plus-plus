// break and continue

#include <iostream>
using namespace std;

int main()
{
    // for (int i = 0; i < 10; i++)

    // {

    //     /* code */ if (i == 2)
    //     {
    //         break;
    //         // it comes out of the loop
    //         // make a kind of throw out system
    //     }
    //     cout << i << endl;
    // }

    for (int i = 0; i < 10; i++)

    {
        // continue it makes the loop to say bhai ise chhod bakio ke karle
        if (i == 5)
        {
            continue;
        }
        cout<<i<<endl;
        /* code */
    }

    return 0;
}