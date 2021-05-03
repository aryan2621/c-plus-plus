#include <iostream>
#include <bits/stdc++.h>
// to shorten the loops in c++;
using namespace std;

int main()
{
    // range based loops and auto keywords

    vector<int> v_p = {1, 2, 3, 4, 4, 56, 6};
    for (int value : v_p)

    // value means -> value in the containers
    // works on every containers
    // this value consisit of copies
    // for actual values
    // for (int &value : v_p)

    {
        // cout << value << " ";
    }

    vector<pair<int, int>> v_pair = {{2, 3}, {4, 4}, {56, 6}};
    for (pair<int, int> &value : v_pair)
    {
        // cout << value.first << " " << value.second << endl;
    }
    // auto keyword
    auto a = 1;
    // cout << a << endl;

    // for (auto it = v_p.begin(); it != v_p.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // for looping across auto
    for (auto value : v_pair)
    {
        cout << value.first << " " << value.second << endl;
    }

    return 0;
}