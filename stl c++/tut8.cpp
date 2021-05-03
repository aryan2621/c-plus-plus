// set ,unorderd set // multisets

// set->maps me value wala part nikal do bach gya sets
// set-> unique collections of values
// -> normal sets // unorderd sets-> // multi-sets ->

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    // for (string value : s)
    // {
    //     cout << value << endl;
    // }

    for (auto it = s.begin(); it != s.end(); ++it)
    {
        cout << (*it) << endl;
    }
}

int main()
{
    set<string> s;
    // store the values in sorted way;

    s.insert("abc");
    s.insert("rishabh");
    s.insert("pikachu");

    // time complexity->log(n) for access as well as insert
    // store the unique values
    // for search

    // auto it = s.find("abc");

    // // print(s);
    // // cout<<(*it)<<endl;
    // print(s);

    // s.erase(it);
    // cout << endl;
    // print(s);

    /*
    given n strings print unique strngs in lexiogeographical order?

    */
    // set<string> str;
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     string strs;
    //     cin >> strs;
    //     str.insert(strs);
    // }
    // for (auto value : s)
    // {
    //     cout << value << endl;
    // }

    // unoredred set
    unordered_set<string> u_s;
    // places where the order is not mattering!
    // all the time complexities will become 0(1)
    /*
    given the strings find a particular string is prsent or not.
    */

    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     string strss;
    //     cin >> strss;
    //     u_s.insert(strss);
    // }
    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     string str;
    //     cin >> str;
    //     if (u_s.find(str) == u_s.end())
    //     {
    //         cout << "no\n";
    //     }
    //     else
    //     {
    //         cout << "yes" << endl;
    //     }
    // }

    // multiset
    // allow the multiple values
    multiset<string> m_s;
    m_s.insert("abc");
    m_s.insert("abc");
    m_s.insert("abc");
    m_s.insert("abc");
    m_s.insert("abc");
    for (auto value : m_s)
    {
        cout << value << endl;
    }

    //you can use multisets in case of priority queue
    // incase of find will return the fisrt occurance iterartor
    // while in case of erase("abc") it will delete all the occurance of abc
    // log(n)

    return 0;
}