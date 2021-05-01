#include <iostream>

using namespace std;

class Employee
{
    int id;
    int salery;

public:
    void setId(void)
    {
        salery = 122;
        cout << "Enter the id of Employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of the employee " << id << salery << endl;
    }
};

int main()
{
    Employee fb[4];
    // array of objects of class
    // further treat by array
    // you can also pass the objects inside function arguements
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}