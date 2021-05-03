// stl inbuit algorithms

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    // cin >> n;
    vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     // cin >> v[i];
    // }

    int it = *min_element(v.begin(), v.end());
    // minimum element
    // cout << it << endl;

    // max element
    int max = *max_element(v.begin(), v.end());
    // cout << max << endl;

    // finiding them in a particular range;
    int range_max = *max_element(v.begin() + 3, v.end());
    // cout << range_max << endl;

    // accumulate
    int sum = accumulate(v.begin(), v.end(), 0);
    // start end initial sum

    // count of an element
    int counts = count(v.begin(), v.end(), 6);
    // start end kisko find krana hai

    // find-> returns a pointer
    int element = *find(v.begin(), v.end(), 2);
    // cout << counts << endl;

    // reverse-> same vector no copy
    reverse(v.begin(), v.end());

    // string ke liy bhi reverse kam karta hai!

    string s = "abvjqwcbmaC";
    reverse(s.begin(), s.end());
    cout << s << endl;
    // ismebhi ek particular portion ko reverse karte hai

    // sare functions 0(n) m kam karre hai!

    int varr[n];
    int mins = *min_element(varr, varr + n);
    // in case of array

    return 0;
}