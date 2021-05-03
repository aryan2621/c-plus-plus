#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v) // -> this will not led to make another copy
// same vector is passed
// void printVec(vector<int> v)

{
    cout << "size is " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        //0(1) -> time complexity
    }
    cout << endl;
}

int main()
{
    // pairs -> the thing that use to store the somethng in pair form.

    pair<int, string> p;
    // p=make_pair(2,"abc");

    p = {2, "abcdefgy"};
    // pair<int ,string> p1=p;
    // p1.first=3;

    pair<int, string> &p1 = p;
    p1.first = 3;

    // this will make the first portion as the 3 of p1
    // but it will only transfer the copy
    // cout << p.first << " " << p.second;

    int a[] = {1, 2, 3};
    int b[] = {1, 2, 3};
    // suppose we have to swap the elements
    // in the array but for that
    // we have t0 make a relationship between both on them
    // for prevent the overdoing the work

    pair<int, int> p_aray[3];
    p_aray[0] = {1, 2};
    p_aray[1] = {2, 4};
    p_aray[2] = {6, 8};
    swap(p_aray[0], p_aray[2]);

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << p_aray[i].first << " " << p_aray[i].second << endl;
    // }
    // pair is just for making the relation

    // vectors -> continuous memory of blocks
    // array of dynamic size

    vector<int> vec1;       // 0 size vector
    vector<int> vec2(10);   // 10 size  vector but is mutable
    vector<int> vec3(5, 8); // 5 vector but all data is 8 in it.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        printVec(vec1);
        vec1.push_back(x); // 0(1)-> time complexity
        // dynamic size vector
    }
    printVec(vec1);
    vec1.pop_back(); // 0(1) complexity
    // remove the last element.

    vector<int> vec2 = vec1; // 0(n)-> time complexity
    // copying the vectors.
    // not possible in case of array.

    vector<string> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    return 0;
}