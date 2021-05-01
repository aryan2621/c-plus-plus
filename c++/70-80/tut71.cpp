// vectors in c++;

#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "The elements are " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        //  << " at" << v.at(i) << endl;
    }
    cout << endl;
}

int main()
{
    vector<int> vec1; // zero length vector

    vector<char> vec2(4);    // 4-lement character vector
    vector<char> vec3(vec2); // 4-element character vector from vec2
    vector<int> vec4(6, 3);  // 6 element vector of 3s

    display(vec4);
    cout<<vec4.size()<<endl;
    // 333333

    // int element, sizes = 5;
    // cout << "Enter the size of vector " << endl;
    // cin >> sizes;

    // for (int i = 0; i < sizes; i++)
    // {
    //     cout << "Enter an elemnt to add in this vector" << endl;
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back(); to delete from end;

    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter, 566);
    // vec1.insert(iter, 5,566);// insert the 5 copies of 566

    // display(vec1);

    return 0;
}