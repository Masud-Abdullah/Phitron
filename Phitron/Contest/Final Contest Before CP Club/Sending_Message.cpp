#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    while (cin >> s >> t)
    {
        int a = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == t[a])
                a++;
        }
        if (a == t.size())
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }
    return 0;
}