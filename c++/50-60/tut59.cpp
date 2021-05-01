// reading/writing in files->

#include <iostream>
#include <fstream>

using namespace std;

// the useful classes for working with files in c++;
// fstream
// ifstream -> derived from fstream.
// ofstream -> derive from fstream.
// in order to work with files,you have to open them
// types of opening files are 1. constructor 2.open

int main()
{
    // opening files using constructor

    string st = "Rishah verma is a very good boy!";
    string st2;
    // writing operation
    // ofstream out("sample.txt");
    // out << st;

    // reading from the file.
    ifstream in("sample1.txt");
    // in >> st2;
    // cout<<st2;
    //this will make outcome of single word as spaces are ignored.

    // to get a whole line
    // use getline
    getline(in, st2);
    cout<<st2;
    

    return 0;
}