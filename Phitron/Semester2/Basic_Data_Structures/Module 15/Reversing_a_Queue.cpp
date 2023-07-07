#include <bits/stdc++.h>
queue<int> reverseQueue(queue<int> q)
{
    stack<int> s;
    while (!q.empty())
    {
        int tm = q.front();
        s.push(tm);
        q.pop();
    }

    queue<int> newQ;
    while (!s.empty())
    {
        int tm = s.top();
        newQ.push(tm);
        s.pop();
    }
    return newQ;
}
