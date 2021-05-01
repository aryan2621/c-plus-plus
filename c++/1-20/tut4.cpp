// c++ basic input comes with libraries helps in performing
// the i/o in c++ sequence coressponding to input and output commonly called as stream.
// input stream -> direction of flow of input device to main memory
// output stream  -> direction of flow of bytes from main memory to output device .
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2;
    cout << "enter the fisrt numebr";
    cin >> num1;
    cout << "enter the second numebr";
    cin >> num2;
    cout << num1 + num2;
    return 0;
}
// << insertion operator
// >> extraction operator;

