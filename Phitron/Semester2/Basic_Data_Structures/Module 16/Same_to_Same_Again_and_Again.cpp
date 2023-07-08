#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> Stk;
    queue<int> Que;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        Stk.push(x);
    }

    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        Que.push(x);
    }

    if (Stk.size() != Que.size())
    {
        cout << "NO\n";
        return 0;
    }

    bool f = true;

    while (!Stk.empty())
    {
        if (Stk.top() != Que.front())
        {
            f = false;
            break;
        }
        Stk.pop();
        Que.pop();
    }

    if (f)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}