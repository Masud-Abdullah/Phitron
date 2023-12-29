#include <bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define sz(v) v.size()
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;

    string s;
    cin >> s;
    ll pre[sz(s) + 1] = {0},z=0,o=0;
    for (ll i = 0; i < sz(s); i++)
    {
        if(s[i]=='0')z++;
        //else o++;

        if(z>0 && s[i]=='1')
        {
            pre[i+1]+=+pre[i]+1;
            z=max(0LL,z-1);
        }
        else pre[i+1]+=pre[i];
        // if (s[i] == '1' && s[i - 1] == '0')
        // {
        //     pre[i + 1] += pre[i] + 1;
        // }
        // else
        //     pre[i + 1] += pre[i];
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll x, y;
        cin >> x >> y;
        //cout<<2*(pre[y]-pre[x])<<nl;
    }
    for (ll i = 1; i <= sz(s); i++)cout << pre[i] << " ";
    cout << nl;

    return 0;
}
