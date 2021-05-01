// friend class and friend member functions

#include <iostream>

using namespace std;

class Complex;
// example of forward declaration;

class Calculator
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    // friend function
    int sumComplex(Complex o1, Complex o2);
    int sumCompComplex(Complex o1, Complex o2);
};

// a second class calculator which having a function to access the
// private members of complex other class

class Complex
{
    int a, b;

    // declaration to get access by calculator
    //individually declaing as friend
    // but you can make a whole class as frined as bar bar karne me dkkt hoge
    // 50 function k liy 50 bar thode karoge declare

    // friend int Calculator ::sumComplex(Complex o1, Complex o2);
    // friend int Calculator ::sumCompComplex(Complex o1, Complex o2);

        friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }
};

//friend function definition
int Calculator ::sumComplex(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return o1.b + o2.b;
}

int main()
{
    Complex o1, o2;
    Calculator calc;

    o1.setNumber(1, 2);
    o2.setNumber(25, 5);
    int res = calc.sumComplex(o1, o2);
    int res2 = calc.sumCompComplex(o1, o2);

    cout << "The real part of o1 + o2 is " << res << endl;
    cout << "The imaginary part of o1 + o2 is " << res2 << "i" << endl;

    return 0;
}

// class  function acting as the friend for other class member.