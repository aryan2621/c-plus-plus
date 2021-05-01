// member function template and overloading template

#include <iostream>

using namespace std;
template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    // void display()
    // {
    //     cout << data << endl;
    // }
    void display();
};

template <class T>
void Harry<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "I m first func" << a << endl;
};

template <class T>
void func(T a)
{
    cout << "I m T func" << a << endl;
};

int main()
{
    // Harry<float> h(5.7);
    // cout << h.data << endl;
    // h.display();

    func(4);
    //exact match take highest priority
    return 0;
}