#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> Q1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        Q1.push(x);
    }
    stack<int> st;
    while (!Q1.empty())
    {
        st.push(Q1.front());
        Q1.pop();
    }
    queue<int> Q2;
    while (!st.empty())
    {
        Q2.push(st.top());
        st.pop();
    }

    while (!Q2.empty())
    {
        cout << Q2.front() << " ";
        Q2.pop();
    }
    cout << endl;

    return 0;
}