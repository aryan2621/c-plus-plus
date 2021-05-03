// vectors of vectors

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int, int>> &v)
{
    cout << "Size:" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
}
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
    vector<pair<int, int>> v = {{1, 2}, {2, 4}, {4, 8}};
    // vector of pair;
    printVec(v);
    // inserting the element
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)

    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
        // v.push_back(make_pair(x, y));
    }
    int N;

    vector<int> vec1[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        for (int j = 0; i < n; ++j)

        {
            int x;
            cin >> x;
            vec1[i].push_back(x);
        }
    }

    for (int i = 0; i < N; i++)

    {
        printVec2(vec1[i]);
    }

    return 0;
}