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
const ll N = 1e5+7;
ll a[N],n,c;
bool check(ll mid)
{
    ll total=1,it=1;
    for(int i=2;i<=n;i++)
    {
        if((a[i]-a[it])>=mid)
        {
            total++;
            it=i;
        }
    }  /// 1 2 4 8 9
    return total>=c;
}
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        cin>>n>>c;
        for(int i=1;i<=n;i++)cin>>a[i];

        sort(a+1,a+n+1);

        ll lo=0,hi=LLONG_MAX,ans=0,mid;
        while(lo<=hi)
        {
            mid=lo+(hi-lo)/2;
            //cout<<mid<<nl;
            if(check(mid))
            {
                ans=mid;
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}

