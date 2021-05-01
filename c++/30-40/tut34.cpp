//dynamic initialisation of objects with constructor

#include <iostream>

using namespace std;
class Bank
{
    int principal;
    int years;
    float intRate;
    float returnValue;

public:
    Bank();
    Bank(int p, int y, float r);
    Bank(int p, int y, int r);
    void show()
    {
        cout << "Principal Amount was " << principal
             << "\nReturn value is"
             << returnValue << "\nof years " << years << endl;
    }
};
Bank::Bank()
{
    principal = 0;
    years = 0;
    returnValue = 0;
}

Bank::Bank(int p, int y, float r)
{
    principal = p;
    years = y;
    returnValue = principal;

    intRate = r;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intRate);
    }
}
Bank::Bank(int p, int y, int r)
{
    principal = p;
    years = y;
    returnValue = principal;
    intRate = float(r) / 100;

    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intRate);
    }
}

int main()
{
    Bank b1, b2, b3;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of p y and R" << endl;
    cin >> p >> y >> r;
    b1 = Bank(p, y, r);
    b1.show();

    return 0;
}