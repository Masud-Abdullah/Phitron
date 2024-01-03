#include <bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long int
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   vii        vector< int >
#define   vll        vector< ll >
#define   vpi        vector< pii >
#define   vpl        vector<pll>
#define   sz(v)      v.size()
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
map<ll,ll>cnt,bnt;
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll a[n];
        vll ans;
        
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(cnt[a[i]]==0 && a[i]<=n)
            {
                ans.emplace_back(a[i]);
            }
            if(a[i]<=n)cnt[a[i]]++;
        }
        if(sz(ans)==0)
        {
            cout<<0<<nl;
            continue;
        }

        for(ll i=0;i<sz(ans);i++)
        {
            for(ll j=ans[i];j<=n;j+=ans[i])
            {
                bnt[j]+=cnt[ans[i]];
                //cout<<ans[i]<<" "<<j<<" "<<cnt[ans[i]]<<nl;
            }
        }
        //cout<<nl;
        ll mx=LLONG_MIN,mxval;
        for(pll val:bnt)
        {
            if(val.second>mx)
            {
                mx=val.second;
                mxval=val.first;
            }
            //cout<<val.first<<" "<<val.second<<nl;
        }
        // ll ot=0;
        // for(ll i=0;i<n;i++)
        // {
        //     if(mxval%a[i]==0)ot++;
        // }
        cout<<mx<<nl;
        cnt.clear();
        bnt.clear();
    }
    return 0;
}

