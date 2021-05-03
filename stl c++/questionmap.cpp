#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<int, multiset<string>> marks_map;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int marks;
        string name;
        cin >> name >> marks;
        marks_map[marks].insert(name);
    }
    auto current_it = --marks_map.end();
    while (true)
    {
        auto &students = current_it->second;
        int marks = current_it->first;
        for (auto student : students)
        {
            cout << student << " " << marks << endl;
        }
        if (current_it == marks_map.begin())
        {
            break;
        }
        else
        {
            current_it--;
        }
    }
    return 0;
}