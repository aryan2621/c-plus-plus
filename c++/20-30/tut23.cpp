#include <iostream>

using namespace std;

class Employee
// for keep eye on numbers of objects
// we can use static variable
// static variable initailised by 0 itself;
// this is shared by every object
// but this doesnt get unique for every object.have only one copy
// its a property of class.
// static function -> only access by static members ... they can run w/o objects.

{
    int id;
    static int count;

public:
    void setData(void)
    {
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << id << " and the employee number " << count << endl;
    }

    static void getCount(void)
    {
        cout << "count " << count << endl;
    }
};

int Employee::count;

int main()
{
    Employee e1, rohan, lakshya;
    Employee::getCount();
    e1.setData();
    e1.getData();
    rohan.setData();
    rohan.getData();
    lakshya.setData();
    lakshya.getData();
    return 0;
}