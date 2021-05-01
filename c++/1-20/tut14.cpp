// function and function prototype

#include <iostream>
using namespace std;

// function -> breaking of a complex code in the pieces and then use them

//

// function prototype-> declare the function to compiler
// function prototype syntax -> type function-name (argumenets)
// it makes the program to prevent error even if the function is declared after
// the main

int sum(int a, int b);
// int sum(int,int) also acceptable

// formal parameters -> used in function defnition
// actual parameters -> used in function calling

//
void g();

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << sum(a, b) << endl;



    // function callng
    // on passing the values it goes in function definition
    // and replace the values in them and return after the whole process

    
    g();
    return 0;
}

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void g()
{
    cout << "hii good morning !!";
}

// formal and actual parameter can be same