#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n,m,h;cin>>n>>m>>h;
        ll a[n],b[m];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<m;i++)cin>>b[i];
        sort(a,a+n,greater<ll>());
        sort(b,b+m,greater<ll>());
        ll ans=0;
        for(int i=0;i<min(n,m);i++)
        {
            ll x=b[i]*h;
            ans+=min(a[i],x);
        }
        cout<<ans<<'\n';
    }
    return 0;
}