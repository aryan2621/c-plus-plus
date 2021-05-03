#pragma once
// it means it is going ti be get evaluated by c++  library
// important -> multiple definition of same file
// like using the #include"Log.h" in a file twice will result and error
// and thats y we for preventting this

// #ifdef _LOG_H
// #define _LOG_H

// this ensure a sinhgle times definition of header file.
// <> this will get use only when the including file is of system file
// " "But if you want to use the file which is relative then "" use

#include <iostream>
using namespace std;

void Log(const char *message)
{
    cout << message << endl;
}
void Initlog()
{
    Log("Initialising Log");
    //clearly the log is unndefined for that we just want
    // to declare here.
    // but what if we have to use the log function
    // other places but its not the correct way. option-1
    // for that we need the header fle declaration type methof
}

// #endif