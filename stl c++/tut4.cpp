// iterators -> helps in accessing the containers values

// similarly like of the pointers
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 4, 56, 66};
    // .begin-> the 0 index
    // .end-> next of end

    // definition of iterartors

    vector<int>::iterator iter;
    // iter = v.begin();
    // cout << *iter << endl;
    // cout << *(iter + 1) << endl;

    for (iter = v.begin(); iter != v.end(); ++iter)
    {
        // cout << *iter << endl;
    }
    // iter ++ vs iter+1;
    // iter++ ->moves to next iterator.
    // iter+1 -> move to next location.
    // in  case of vectors no difference
    // but in case of other containers
    // where the elemnts are not continuous its harmful.

    vector<pair<int, int>> v_p = {{1, 2}, {34, 55}, {4, 7}};
    vector<pair<int, int>>::iterator iters;
    // for (iters = v_p.begin(); iters != v_p.end(); ++iters)
    // {
    //     cout << (*iters).first << " " << (*iters).second << endl;
    // }

    for (iters = v_p.begin(); iters != v_p.end(); ++iters)
    {
        cout << iters->first << " " << iters->second << endl;
    }
    // (*iters).first=iters->first

    return 0;
}