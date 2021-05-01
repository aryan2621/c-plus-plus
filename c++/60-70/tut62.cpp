#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

// open and eof function in c++
int main()
{
    ofstream out;
    out.open("sample.txt");
    out << "This is me rishabh verma\n";
    out << "This is me rishabh verma\n";
    out << "This is me rishabh verma";

    out.close();

    ifstream in;
    string st;
    in.open("sample.txt");
    // in>>st;
    cout << st;
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }

    in.close();

    return 0;
}