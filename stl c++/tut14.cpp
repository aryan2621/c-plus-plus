// custom behaviour is defned by the
// comparator function in stl;

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// bool should_i_swap(int a, int b)
// {
//     if (a > b)
//         return true;
//     return false;
// }

bool cmp(int a, int b)
{
    return a > b;
}
bool should_i_swap(pair<int, int> a, pair<int, int> b)
{
    if (a.first != b.first)
    {
        if (a.first > b.first)
            return true;
        return false;
    }

    // if (a > b)
    //     return true;
    // return false;

    else
    {
        if (a.second < b.second)
            return true;
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    // vector<int> a;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if ((should_i_swap(a[i], a[j])))
    //         {
    //             swap(a[i], a[j]);
    //         }
    //     }
    // }

    sort(a.begin(), a.end(), should_i_swap);

    // agar sawp karna hai to mughe false return karo
    // according to inbuilt comparartor function;
    // jo chhaiy jaise chaiy use waise hi return kardo

    for (int i = 0; i < n; i++)
    {
        cout << a[i].first << " " << a[i].second;
    }

    return 0;
}
