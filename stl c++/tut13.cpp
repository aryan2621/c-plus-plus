// inbuilt sort in c++;

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// best sorting algorithm -> present in c++ std libraray

int main()
{
    int n;
    cin >> n;
    // int a[n];
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    //  sort(a, a+n);
    // jaha se shuru karne jaha pe khatam karne use ek jyada;
    // intro sort
    // mixture of three sort-> quick sort heap sort insertion sort
    return 0;
}