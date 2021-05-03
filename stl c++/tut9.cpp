// nesting

// nesting in strl
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // map<pair<int, int>, int> m;
    pair<int, int> p1, p2;

    p1 = {1, 2};
    p2 = {2, 3};
    cout << (p1 < p2);

    // clearly it is true so print 1;
    // 1<2
    cout << (p1 > p2);

    //false so print 1 // as we compare the first key
    // and if they are same then we move to the second key

    p1 = {2, 2};
    p2 = {2, 3};
    cout << (p1 > p2);

    // will return 0 as 2<3;
    // values  arecompared in case keys are same;

    // case of nesting of sets
    map<set<int, int>, int> s;
    set<int> s1 = {1, 2, 3, 4};
    set<int> s2 = {2, 3, 4};
    cout << (s1 < s2);
    // 1 as its true first element is compared and until we get the deciding element.

    // vectors are treated in same ordered

    // jinko ham compare kar sakte hai unhe ham as a key use kar sakte hai in case of maps
    // as a nested data structure
    // or value me ham kuch bi dal sakte hai

    map<pair<string, string>, vector<int>> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string fn, ln;
        int ct;
        cin >> fn >> ln >> ct;
        for (int j = 0; i < ct; ++j)
        {
            int x;
            cin >> x;
            m[{fn, ln}].push_back(x);
        }
    }
    for (auto &pr : m)
    {
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout << full_name.first << " " << full_name.second << endl;
        cout << list.size() << endl;
        for (auto &element : list)
        {
            cout << element << " " << endl;
        }
        cout << endl;
    }
    // pair sorted me store hoga.
    return 0;
}
