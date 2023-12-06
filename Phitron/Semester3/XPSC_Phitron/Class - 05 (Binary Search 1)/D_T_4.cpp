#include <bits/stdc++.h>
#define   nl         "\n"
#define   NN         (cout << "NO\n")
#define   YY         (cout << "YES\n")
#define   nn         (cout << "No\n")
#define   yy         (cout << "Yes\n")
#define   ss         second
#define   ff         first
#define   all(v)     v.begin(),v.end()
#define   ll         long long int
#define   ull        unsigned long long
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
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   pi         acos(-1.0)
#define   jog(v)     accumulate(v.begin(), v.end(), 0)
#define   gun(v)     accumulate(v.begin(), v.end(), 1, multiplies<int>())
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
const ll N=1e3+5;
ll n,m,a[N];
bool check(ll mid)
{
    ll sm=0,j=0,cnt=1;
    bool f=false;
    for(int i=0;i<n;i++)if(a[i]>mid)return false;
    for(int i=0;i<n;i++)
    {
        sm+=a[i];
        if(sm>mid)
        {
            cnt++;
            sm=a[i];
        }
    }
    return (cnt<=m);
}
int main()
{
    FIO;
    while(cin>>n>>m)
    {
        for(int i=0;i<n;i++)cin>>a[i];

        ll lo=0,hi=1e18,mid,ans=0;
        while(lo<=hi)
        {
            mid=lo+(hi-lo)/2;
            if(check(mid))
            {
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        cout<<ans<<nl;
    }
    return 0;
}
/*
for(int i=0;i<n;i++)
    {
        sm+=a[i];
        if(sm>=mid)
        {
            f=true;
        }
        if(sm>mid)
        {
            sm-=a[j];
            j--;
            cnt++;
        }
    }
*/
