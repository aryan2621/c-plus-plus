// all_of/any_of/none_of;

// all_of-> make a particular condition on whole strucure if all give true then true;
// any_of-> make a particular condition on whole strucure if any give true then true;
// none_of-> make a particular condition on whole strucure if none give true then true;
// lambda function

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // cout << [](int x) { return x + 2; }(2) << endl; // -> lambda function (2)-> calling
    // auto sum = [](int x, int y) { return x + y; };
    // cout << sum(2, 3);

    vector<int> v = {2, -3, 4}; // 0
    // vector<int> v = {2, 3, 4};  // 1

    cout << all_of(v.begin(), v.end(), [](int x) { return x > 0; }) << endl;

    vector<int> vec = {-1, -2, -3};
    cout << any_of(vec.begin(), vec.end(), [](int x) { return x > 0; }) << endl;

    vector<int> vec2 = {1, 2, 3, 4};
    cout << none_of(vec2.begin(), vec2.end(), [](int x) { return x < 0; }) << endl;

    cout << endl;
    vector<int> vec4 = {2, 4, 6}; // 0
    // vector<int> v = {2, 3, 4};  // 1

    cout << all_of(vec4.begin(), vec4.end(), [](int x) { return x %2== 0; }) << endl;

    vector<int> vec5 = {2,3,3};
    cout << any_of(vec5.begin(), vec5.end(), [](int x) { return x %2== 0; }) << endl;

    vector<int> vec6 = {1,23,45};
    cout << none_of(vec6.begin(), vec6.end(), [](int x) { return x %2== 0; }) << endl;

    return 0;
}
