// conditions and branches in c++;

// evaluation based on condition
// condition and flowing of branches based on condition
// comparinng means taking the bytes of  each memory and comparing bit by bit;


#include <iostream>
#include "Log.h"

using namespace std;

int main()
{
    int x = 5;
    bool compare = x == 5;
    // this either true or false;
    if (compare)
    //if compare==true
    {
        Log("hello world");
    }
    return 0;
}