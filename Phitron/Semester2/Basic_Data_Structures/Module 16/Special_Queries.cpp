#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    queue<string> Q;
    for (int i = 1; i <= q; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            if (!Q.empty())
            {
                cout << Q.front() << endl;
                Q.pop();
            }
            else
                cout << "Invalid\n";
        }
        else
        {
            string s;
            cin >> s;
            Q.push(s);
        }
    }
    return 0;
}