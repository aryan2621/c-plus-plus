#include <iostream>

using namespace std;

// variables -> concept of data
// we manipulate data modify the data and for that we have to use variables as they allocates memory in  cpu
// in stack or heap
// we have prmitive data types
// size is important thing!

int main()
{
    int a = 5; // -2b to + 2b
    // but generally 4 bytes
    // size of data type depends on compiler
    a = 30;
    // variables are mutable
    // these range of -2b to +2b depends on the size of data.
    cout << a << endl;

    // how we get this range
    // 1 byte =4bit
    // 8 byte =32 bit
    // signed so -ve  and + ve can it be. for that one from 8 will be loss
    // 31 is  left for data
    // now the bit can only 0 or 1
    // so total possibilities is 2
    // on doing 2^31 qe get 2b approx
    // so we  can store + and - both.
    // we can store only + numbers too.
    // just  type unsigned with range of 2^32

    //  char -1
    // short -2
    // int-4
    // long-4
    // long long 8

    // char for characters
    // char internally store the numbers as we know ascii values
    // difference between data types is just because of the memory they occupy

    // float double  for decimal values
    // imp float variable =6.6;-> double
    // double var=7.7;-> double
    // float var=8.8f;-> float
    // float -> 4 bytes
    // double -> 8 bytes
    // bool -> T/F
    // 0->false
    // other than 0-> true
    // bool -> 1 btye

    // sizeof(variable) for knowing the size

    // pointers are visaulise by *
    // refereance by the &

    int b = 2;
    cout << sizeof(b) << endl; //4
    float x = 9.7;
    cout << (x) << endl; // 8

    return 0;
}