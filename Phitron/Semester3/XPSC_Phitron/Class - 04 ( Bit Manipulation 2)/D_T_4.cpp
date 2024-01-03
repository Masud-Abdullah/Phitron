#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        sort(a,a+n,greater<ll>());
        ll ans=0;
        priority_queue<ll>pq;
        pq.push(a[0]);
        for(ll i=1;i<n;i++)
        {
            if(a[i]<=pq.top())
            {
                ll val=pq.top();
                pq.pop();
                pq.push(val^a[i]);
            }
            else pq.push(a[i]);
        }

        cout<<pq.size()<<'\n';

    }
    return 0;
}