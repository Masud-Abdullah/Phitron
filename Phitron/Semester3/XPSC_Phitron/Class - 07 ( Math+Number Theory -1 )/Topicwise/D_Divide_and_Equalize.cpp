#include <bits/stdc++.h>
#define   nl         "\n"
#define   NN         (cout << "NO\n")
#define   YY         (cout << "YES\n")
#define   all(v)     v.begin(),v.end()
#define   ll         long long int
#define   gcd(a, b)  __gcd(a, b)
#define   lcm(a, b)  ((a/gcd(a,b)) * b)
#define   pb         push_back
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   vii        vector< int >
#define   vll        vector< ll >
#define   vpi        vector< pii >
#define   vpl        vector<pll>
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
        ll a[n+1];
        for(ll i=1;i<=n;i++)cin>>a[i];

        sort(a+1,a+n+1);
        
        if(a[1]==a[n])
        {
            YY;
            continue;  // initially array er shob element same naki check krlam
        }
        map<ll,ll>cnt;
        for(ll i=1;i<=n;i++)
        {
            ll cur=a[i];
            for(ll j=2;j*j<=cur;j++)
            {
                while(cur%j==0)
                {
                    cnt[j]++;
                    cur/=j;
                }
            }
            if(cur>1)cnt[cur]++;
        }

        bool f=true;
        for(auto it : cnt)
        {
            if(it.second%n)
            {
                f=false;
                break;
            }
        }

        if(f)YY;
        else NN;
    }
    return 0;
}
