#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll x = LLONG_MIN, xindx, y = LLONG_MIN, yindx;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > x)
            {
                x = a[i];
                xindx = i;
            }
        }

        for (ll i = 0; i < n; i++)
        {
            if (a[i] != x && a[i] > y)
            {
                y = a[i];
                yindx = i;
            }
        }

        if (xindx > yindx)
            swap(xindx, yindx);
        cout << xindx << " " << yindx << endl;
    }
    return 0;
}