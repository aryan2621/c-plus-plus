// function objects(functor) -> a function wrapped in a class
// so that it can be used like an object

#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {111, 23, 355, 14, 5, 5};
    sort(arr, arr + 6, greater<int>());

    // sort(arr, arr + 6);

    // this will do in ascending order.

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}