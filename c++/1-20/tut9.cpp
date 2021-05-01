// loops-> for doing a repetitive action
// until a condition is true
/*
types 
for loop
while loop
do while loop
 
*/

#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    // for (int i = 0; i < 100; i++)
    //for(initialisation; condition ;action /updation)
    // {
    /* loop body c++ code */
    // cout << i << endl;
    // }
    // if a condition is true always then it is called infinite loop

    // while loop

    // int a = 0;

    // while (a < 8)
    // {
    //     cout << a << endl;
    //     a++;
    //     /* infinite while loop can also be occur */
    // }

    // do whiile

    // do
    // {
    //     /* code */
    // } while (/* condition */);
    // difference is at only once it will run
    // and after that it start checking

    
    int a = 0;

    do
    {
        cout << a << endl;
        a++;
        /* infinite while loop can also be occur */
    } while (a < 8);

    return 0;
}
