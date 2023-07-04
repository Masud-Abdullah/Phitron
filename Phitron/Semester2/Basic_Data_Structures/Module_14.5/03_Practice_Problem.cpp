#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    stack<int> newS;
    while (!s.empty())
    {
        int val = s.top();
        newS.push(val);
        s.pop();
    }

    while (!newS.empty())
    {
        cout << newS.top() << " ";
        newS.pop();
    }
    cout << endl;
    return 0;
}