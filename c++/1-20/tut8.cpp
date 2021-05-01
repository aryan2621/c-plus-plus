#include <iostream>
#include <iomanip>

// control structure-> provide sequence and flow of program;

// sequence
// selection
// loop

// these three are basic control structures

// sequence ->entry-> action1-> action2-> action3-> end
// selection -> entry-> condition-> if(true)-> action1 else action2->end;
// loop structure -> entry -> until the condition is true action1 is continue -> end;

//if/else statement

using namespace std;

int main(int argc, char const *argv[])
{
    // int i = 0;
    // if (i < 3)
    /* {
        // single if else
        cout << i;
        i++;
    }
    */

    //if else ladder

    // switch case
    // switch (expression){
    /*
    case 1:
    -----
    break;
    case2:
    ----
    break;
    
    */
    // }

    // if else ladder
    int age;
    cin >> age;
    if (age < 18 && age > 0)
    {
        cout << "not allowed";
    }
    else if (age == 18)
    {
        cout << "exact 18";
    }
    else if (age > 18)
    {
        cout << "allowed";
    }
    else
    {
        cout << "allowed to born";
    }

    // switch case
    // age a crieteria for checking the values
    // break is important as it prevent the flow after
    // it selected a case;
    switch (age)
    {
    case 18:
        cout << "you are 18";
        break;
    case 22:
        cout << "you are 22";
        break;

    default:
        cout << "default cases";
        break;
    }

    return 0;
}
