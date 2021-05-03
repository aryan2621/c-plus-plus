// unordered maps
// maps vs unordered maps

// 1.inbuilt implementation.
// 2.Time Complexity
// 3.valid key data types
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printMap(unordered_map<int, string> &maps)
{
    cout << maps.size() << endl;
    for (auto &pr : maps) // 0(log(n))
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    unordered_map<int, string> m;
    m[1] = "rishabh"; // 0(1)-> for access and insertion.
    m[4] = "rishabh verma";
    m[3] = "rishabh kumar";
    printMap(m);

    // unorederd maps -> we cant use the deeper complex data types in the unoredred maps
    // it base on the hash functions

    // this will be unordered
    // maps-> use the inbuilt tress for process
    //unordered maps-> use the inbuilt hashing(hash table) to process

    // ques->given n string and 0 queries
    // for each query print the frequency of that string

    unordered_map<string, int> maps;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        maps[s]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << maps[s] << endl;
    }

    return 0;
}
// multi map -> unique keys
// this will never be in use