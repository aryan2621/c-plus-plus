// upper bound lower bound

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// the working things should be in sorted form
// lower bound-> agar value maujood hai to usi ko nikal dega
// warna use ek badi
// upper bound->jo dia hai use ek bada hi dega
int main()
{
    // {
    //     int n;
    //     cin >> n;
    //     int a[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> a[i];
    //     }
    //     sort(a, a + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    // return pointer in case of array
    // and iterarors in case of vectors

    // int *ptr = lower_bound(a, a + n, 6);

    // // syntax ->starting  -> ending -> kiski chhaiy value;
    // if (ptr == (a + n))
    // {
    //     cout << "Not Found" << endl;
    //     return 0;
    //     // if there is no such entry as passed in the lower_bound then it returns the garbage value
    // }
    // cout << *ptr << endl;

    // int *ptr2 = upper_bound(a, a + n, 24);
    // if (ptr2 == (a + n))
    // {
    //     cout << "Not Found" << endl;
    // }
    // cout << *ptr2 << " "; // log(n)
    // sorted is must;

    /////////////////////////// MAPS+SETS ////////////////////////////////
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    auto it = s.lower_bound(7);
    return 0;
}