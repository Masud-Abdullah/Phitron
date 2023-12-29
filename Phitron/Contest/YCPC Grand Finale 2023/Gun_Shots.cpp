#include <bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long int
#define   vll        vector< ll >
#define   sz(v)      v.size()
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        vll ans;
        for(ll i=0;i<n;i++)
        {
            ll x;cin>>x;
            ans.push_back(x);
        }
        ll val=0;
        for(ll i=0;i<n;i++)
        {
            if(sz(ans)>=3)
            {
                ll tp=LLONG_MIN,indx;
                for(ll j=1;j<sz(ans)-1;j++)
                {
                    if(ans[j-1]*ans[j+1]>tp)
                    {
                        tp=ans[j-1]*ans[j+1];
                        indx=i;
                    }
                }
                val+=tp;
                ans.erase(ans.begin()+i);
            }
            if(sz(ans)==2)
            {
                val+=ans[0]+ans[1];
                ans.clear();
            }
            if(sz(ans)==1)
            {
                val+=ans[0];
                ans.clear();
            }
        }
        cout<<val<<nl;
    }
    return 0;
}

