#include <bits/stdc++.h>
#define   nl         "\n"
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
        ll n,k;cin>>n>>k;
        string s;cin>>s;
        ll black[n+1]={0};
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='B')black[i+1]+=black[i]+1;
            else black[i+1]=black[i];
        }
        ll mx=LLONG_MIN;
        for(ll i=k;i<=n;i++)
        {
            mx=max(mx,abs(black[i]-black[i-k]));
        }
        cout<<k-mx<<nl;
    }
    return 0;
}

