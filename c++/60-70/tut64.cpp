// c++ templates
#include <iostream>

using namespace std;

// data type ko as a variable ki tarah treat karli and then we are enjoying......

template <class T>
class vector
{
public:
    T *arr;
    int size;

    vector() {}
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<int> v1(3);
    v1.arr[0] = 2;
    v1.arr[1] = 2;
    v1.arr[2] = 2;
    vector<int> v2(3);
    v2.arr[0] = 2;
    v2.arr[1] = 2;
    v2.arr[2] = 2;
    int a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}