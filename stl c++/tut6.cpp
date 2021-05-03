// maps
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printMap(map<int, string> &maps)
{
    cout << maps.size() << endl;
    for (auto &pr : maps) // 0(log(n))
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{

    // maps -> data is aranged in terms of the keys
    // in ascending order.
    // they are implemented by red black trees.
    // maps occupy the random location.
    // it++ correct it+1 wrong

    map<int, string> maps;
    maps[1] = "rishabh"; // 0(log(n))
    maps[4] = "rishabh verma";
    maps[3] = "rishabh kumar";

    maps.insert({1, "naitik bverna"});

    // map<int, string>::iterator it;
    // for (it = maps.begin(); it != maps.end(); it++)
    // {
    //     // cout << (*it).first << " " << (*it).second << endl;
    //     cout << it->first << " " << it->second << endl;
    // }
    // keys are unique in maps
    // dupliactes not involve

    // printMap(maps);

    // auto it = maps.find(7);
    // // 0(log(n))
    // if (it == maps.end())
    // {
    //     cout << "No Values";
    // }
    // else
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // erasing the values
    maps.erase(3);
    // 3 rishabh kumar erased

    // erasing by pointer
    auto its = maps.find(1);
    maps.erase(its);
    printMap(maps);

    // maps.clear->clear the maps
    // either the insertion is 0(log(n)) but still the this time depends on the
    // types of key.
    // the time complexity is like maps.size()*0(log(n))
    // as it first sort ,compare and then do the insertion.

    // ques->given n string and 0 queries
    // for each query print the frequency of that string in lexological order.?

    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
        for (auto pr : m)
        {
            cout << pr.first << " " << pr.second << endl;
        }
    }
    return 0;
}