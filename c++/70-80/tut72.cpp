// list in c++;

#include <iostream>
#include <list>

using namespace std;

// list -> container bidirection linear list
// list same like as linkedlist

void display(list<int> &lst)
{
    list<int>::iterator iterators;
    for (iterators = lst.begin(); iterators != lst.end(); iterators++)
    {
        cout << *iterators << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; // list of 0 length;

    // inserting elements in the list one by one
    list1.push_back(5);
    list1.push_back(3);
    list1.push_back(6);
    list1.push_back(1);
    // list1.sort();

    // removing members from the list

    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(5);
    // display(list1);

    // list<int>::iterator iter;
    // iter = list1.begin();
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // iter++;
    // cout << *iter << endl;
    // iter++;

    list<int> list2(3); // empty list of size 7;
    list<int>::iterator iter;
    // iterator concept
    iter = list2.begin();
    *iter = 4;
    iter++;
    *iter = 5;
    iter++;
    *iter = 8;
    iter++;
    // display(list2);

    //reversing the list
    list1.reverse();
    display(list1);

    // list1.merge(list2);
    // cout << "List 1 after merging " << endl;
    // display(list1);

    return 0;
}