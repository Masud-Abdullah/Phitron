#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin >> n;
    char ch[n + 1][n + 1];

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ch[i][j] = ' ';
        }
    }

    for (ll i = 0; i < n; i++)
    {
        ch[0][i] = (i + 1) + '0';
    }
    for (ll i = 0; i < n; i++)
    {
        ch[n - 1][i] = n + '0';
    }

    for (ll i = 0; i < n; i++)
    {
        ch[i][0] = (i + 1) + '0';
    }

    for (ll i = 0; i < n; i++)
    {
        ch[i][n - 1] = n + '0';
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cout << ch[i][j];
        }
        cout << endl;
    }
    return 0;
}