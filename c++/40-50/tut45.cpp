// virtual base class-> pass only the single copy to child class
// prevent from ambiguity and problem

#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_roll()
    {
        cout << "The roll number is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(int a, int b)
    {
        maths = a;
        physics = b;
    }
    void get_marks()
    {
        cout << "Your result is " << maths << " " << physics<<endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void get_score()
    {
        cout << "Score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        get_marks();
        get_score();
        print_roll();
        cout << "Your total score is " << total << endl;
    }
};

int main()
{
Result r1;
r1.set_marks(25,77);
r1.set_number(40);
r1.set_score(8);
r1.display();

    return 0;
}