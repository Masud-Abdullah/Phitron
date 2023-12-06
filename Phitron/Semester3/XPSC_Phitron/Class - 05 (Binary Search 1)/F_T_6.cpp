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
const ll N=1e4+5;
ll a[N],n;
ll check(ll mid)
{
    double ans=1.0;
    for(int i=0;i<n;i++)
    {
        ans*=(a[i]*1.0/mid);
    }
    if(fabs(ans-1.0)<1e-15)return 1;
    else if(ans>1.0)return 2;
    else if(ans<1.0)return 0;
}
using namespace std;
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        cin>>n;
        a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        ll lo=0,hi=LLONG_MAX,mid;
        bool f=false;
        while(lo<=hi)
        {
            mid=lo+(hi-lo)/2;
            
            if(check(mid)==1)
            {
                f=true;
                break;
            }
            else if(check(mid)==2)lo=mid+1;
            else hi=mid-1;
        }
        if(f)YY;
        else NN;
    }
    return 0;
}

