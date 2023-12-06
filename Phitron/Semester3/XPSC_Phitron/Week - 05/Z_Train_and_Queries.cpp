#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pll pair<long long,long long>
int main()
{
    int T;cin>>T;
    while(T--)
    {
        ll n,k;cin>>n>>k;
        ll a[n];
        map<ll,pll>mp;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(mp[a[i]].first==0)
            {
                mp[a[i]].first=i+1;
                mp[a[i]].second=i+1;
            }
            else mp[a[i]].second=i+1;
        }
        while(k--)
        {
            ll x,y;cin>>x>>y;
            if(mp[x].first==0 || mp[y].first==0)cout<<"NO\n";
            else if(mp[x].first<mp[y].second)cout<<"YES\n";
            else cout<<"NO\n";
        }
    } 
    return 0;
}