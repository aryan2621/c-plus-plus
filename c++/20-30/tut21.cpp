#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter the binary number ?" << endl;
    cin >> s;
}

void Binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
        else
        {
            cout << "all are okhy" << endl;
            break;
        }
    }
}

void Binary::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}
void Binary::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    // oops -classes and objects
    // extension of structures
    // limitations in struct-> public members methods cant be puttable
    // classes= structure +more
    // classes= methods+properties
    // make few members as private + public
    // structure in c++ are typedef;
    // can write objects along with class declaration;
    // harry.salary X if its is private;

    // nesting of member function
    Binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    // you can also put the call of one function inside other function;
    // important if any functioon is declarded as private as that cant be called from outside.
    b.display();
    return 0;
}