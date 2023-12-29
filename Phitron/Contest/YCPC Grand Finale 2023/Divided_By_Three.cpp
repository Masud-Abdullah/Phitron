#include <bits/stdc++.h>
#define   nl         "\n"
#define   NN         (cout << "NO\n")
#define   YY         (cout << "YES\n")
#define   ll         long long int
#define   sz(v)      v.size()
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        ll n=sz(s);
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            a[i]=(s[i]-'0');
        }

        ll i=0,val=0;
        while(i<n)
        {
            while(val<3 && i<n)
            {
                val=(val*10)+a[i];
                i++;
            }
            val%=3;
        }
        if(val%3==0)YY;
        else NN;
        // for(ll i=0;i<sz(s);i++)cout<<a[i]<<" ";
        // cout<<nl;
    }
    return 0;
}

