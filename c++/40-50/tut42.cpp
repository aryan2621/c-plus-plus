// multilevel inheritance

#include <iostream>

using namespace std;
class Student
{
protected:
    int roll_nummber;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student::set_roll_number(int a)
{
    roll_nummber = a;
}

void Student::get_roll_number()
{
    cout << "The roll number is " << roll_nummber << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam::get_marks()
{
    cout << "The marks in maths are " << maths << endl;
    cout << "The marks in physics are " << physics << endl;
}

class Result : public Exam
{
    float percent;

public:
    void display()
    {
        get_marks();
        get_roll_number();
        cout << "Your percent is " << (maths + physics) / 2 << " %" << endl;
    }
};

int main()
{
    Result Hary;
    Hary.set_roll_number(420);
    Hary.set_marks(67, 67);
    Hary.display();
    return 0;
}
// a->b->c a is base class for b and  b is base class for c.
// abc is called inheritance path.