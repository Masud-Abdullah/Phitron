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
int main()
{
    FIO;
    ll n;cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);

    ll q;cin>>q;
    while(q--)
    {
        ll x;cin>>x;
        if(a[0]>=x)cout<<"X"<<" ";
        else
        {
            auto it = lower_bound(a,a+n,x);
            cout<<*(it-1)<<" ";
        }

        if(a[n-1]<=x)cout<<"X"<<nl;
        else
        {
            auto it = upper_bound(a,a+n,x) ;
            cout<<*(it)<<nl;
        }
    }
    return 0;
}

