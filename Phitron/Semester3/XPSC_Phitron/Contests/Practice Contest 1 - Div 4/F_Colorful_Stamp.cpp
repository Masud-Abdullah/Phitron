#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b = 0, r = 0, i, j;
        cin >> n;
        string s;
        cin >> s;

        if (s.size() == 1)
        {
            if (s[0] != 'W')
                cout << "NO\n";
            else
                cout << "YES\n";
            continue;
        }

        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
                b++;
            else if (s[i] == 'R')
                r++;
        }

        if ((b == 0 && r == 0))
        {
            cout << "YES\n";
            continue;
        }

        if ((b == 0 || r == 0))
        {
            cout << "NO\n";
            continue;
        }

        b = 0;
        r = 0;
        bool f = true;
        s = s + 'W';

        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == 'W')
            {
                if (i != 0)
                {
                    if (s[i - 1] != 'W' && (b == 0 || r == 0))
                        f = false;
                }
                b = 0;
                r = 0;
            }
            else if (s[i] == 'R')
                r++;
            else
                b++;
        }

        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
