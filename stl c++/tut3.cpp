#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printVec2(vector<int> &v)
{
    cout << "Size:" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // vector of vector
    int N;
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; i < n; ++j)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    for (int i = 0; i < v.size(); ++i)

    {
        printVec2(v[i]);
    }

    return 0;
}