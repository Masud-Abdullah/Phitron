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
        string s;cin>>s;
        ll ans=0;
        if(s[0]=='0' || s.back()=='1' || sz(s)==1)
        {
            cout<<1<<nl;
            continue;
        }
        int n=sz(s);
        ll prefix[n]={0},suffix[n]={0};
        for(ll i=1;i<n;i++)
        {
            if(s[i]=='0')
            {
                prefix[i]+=(prefix[i-1]+1);
            }
            else prefix[i]+=prefix[i-1];
        }

        for(ll i=n-2;i>=0;i--)
        {
            if(s[i]=='1')
            {
                suffix[i]+=(suffix[i+1]+1);
            }
            else suffix[i]+=suffix[i+1];
        }
        // for(ll i=0;i<n;i++)cout<<prefix[i]<<" ";cout<<nl;
        // for(ll i=0;i<n;i++)cout<<suffix[i]<<" ";cout<<nl;
        if(suffix[1]==0)ans++;
        if(prefix[n-2]==0)ans++;
        //cout<<ans<<nl;
        //return 0;
        for(ll i=1;i<n-1;i++)
        {
           if(s[i]=='0')
           {
                ans++;
                break;
           }
           if(suffix[i+1]==0)ans++;
        }

        cout<<ans<<nl;
    }
    return 0;
}