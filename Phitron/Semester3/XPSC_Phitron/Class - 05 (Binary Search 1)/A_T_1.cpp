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
#define   mp         make_pair
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   vii        vector< int >
#define   vll        vector< ll >
#define   vpi        vector< pii >
#define   vpl        vector<pll>
#define   sz(v)      v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   pi         acos(-1.0)
#define   ceil(a,b)  (a+b-1)/b
#define   jog(v)     accumulate(v.begin(), v.end(), 0)
#define   gun(v)     accumulate(v.begin(), v.end(), 1, multiplies<int>())
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;

    for(int i=1;;i++)
    {
        ll n,q;cin>>n>>q;
        if(n==0 && q==0)break;
        cout<<"CASE# "<<i<<":"<<nl;

        ll a[n+1];
        a[0]=0;
        for(int j=1;j<=n;j++)cin>>a[j];

        sort(a+1,a+n+1);

        while(q--)
        {
            ll x;cin>>x;
            ll lo=1,hi=n,mid;
            ll ans=-1;
            while(lo<=hi)
            {
                mid=(lo+hi)/2;
                if(a[mid]==x)
                {
                    ans=mid;
                    hi=mid-1;
                    //lo=mid+1;  //kono element last koto tomo index a ashche eta check korar jonno ei process.
                }
                else if(a[mid]>x)hi=mid-1;
                else if(a[mid]<x)lo=mid+1;
            }
            if(ans==-1)cout<<x<<" not found\n";
            else cout<<x<<" found at "<<ans<<nl;
        }
    }
    return 0;
}

