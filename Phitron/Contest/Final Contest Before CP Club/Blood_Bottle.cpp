#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        vector<ll> v;
        ll cnt = 0;
        for (ll i = 0; i < str.size(); i++)
        {
            if (str[i] == '1')
                cnt++;
            else
            {
                v.push_back(cnt);
                cnt = 0;
            }
        }
        v.push_back(cnt);

        sort(v.begin(), v.end(), greater<int>());

        ll ans = 0;
        for (ll i = 0; i < v.size(); i++)
        {
            if (i % 2 == 0)
                ans += v[i];
        }

        cout << ans << endl;
    }
    return 0;
}