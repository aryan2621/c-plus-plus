// stacks and queues

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // stack-> last in first out.
    // first in last out.
    // top element and size we can access
    // push /pop/ accces the top.

    // queue -> fifo-> first in first out.
    // push / pop /front (access)

    // stack<int> s;
    // s.push(2);
    // s.push(1);
    // s.push(2);
    // s.push(4);

    // while (!s.empty())
    // {
    //     cout << s.top() << endl;
    //     s.pop();
    //     // 4 2 1 2
    // }

    queue<string> q;
    q.push("abc");
    q.push("abcrishabh");
    q.push("abcaverma");
    q.push("abc haii");
    q.push("abcbuteee");

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
        // same manner 
    }

    return 0;
}