#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll cnt[101] = {0};
        ll m, s;
        cin >> m >> s;
        ll b[m], mx = INT_MIN;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            cnt[b[i]]++;
            mx = max(mx, b[i]);
        }
        ll sum = 0;
        for (int i = 1; i <= mx; i++)
        {
            if (cnt[i] == 0)
                sum += i;
        }

        ll i = mx + 1;
        bool f = false;
        while (sum <= s)
        {
            f = true;
            sum += i;
            i++;
        }
        if (f)
            sum -= i - 1;

        if (sum == s)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}