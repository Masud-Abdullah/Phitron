#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n++;
    while (1)
    {
        string s = to_string(n);
        if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3])
        {
            cout << s << endl;
            break;
        }
        else
            n++;
    }
    return 0;
}