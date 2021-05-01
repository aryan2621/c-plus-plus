
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("sample.txt");
    // opening of the file.

    // writing a name from user and puting it in the file.
    // cout << "Enter the name";
    // string name;
    // cin >> name;

    // writing the name to the file
    // out << "My name is " + name;
    // out.close();

    //reading from the file
    ifstream in("sample1.txt");
    string content;
    getline(in, content);
    in >> content;
    cout << content;
    in.close();

    return 0;
}