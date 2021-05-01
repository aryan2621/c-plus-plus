//   inheritance syntax

#include <iostream>

using namespace std;

// base class Employee
class Employee
{

public:
    int id;
    float salery;
    Employee() {}
    Employee(int inpId)
    {
        id = inpId;
        salery = 34.8;
    }
};

// Derive class
// class derive-class-name : visibility-mode base-class-name
// visibility mode decide how to derive the members
// publically ->public members of base class will become public members of derived class
// private->public members of base class will become private members of derived class
// default visibility mode is private;
// private members of base never get inherit

class Progroammer : Employee
{
public:
    int langCode = 3;
    void getData()
    {
        cout << id << endl;
    }
    Progroammer(int inpId)
    {
        id = inpId;
        // public members are accessible through this
        // for this we have to make all our private members as public after
        // then we can initialise them.
    }
};

int main()
{
    Employee harry(1), rohan(2);
    Progroammer skill(1);
    cout << skill.langCode << endl;
    // this will be accessible inside the definition
    // but if we access this will not can be as skill.id this is wrong
    // but  if we do like class Programmer: public Employee
    // then its ohky
    skill.getData();

    return 0;
}