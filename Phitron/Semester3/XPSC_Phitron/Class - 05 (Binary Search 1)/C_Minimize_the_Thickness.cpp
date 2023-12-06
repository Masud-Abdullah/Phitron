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
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        ll sm=0,cnt=LLONG_MAX;
        bool g=false;
        
        for(int i=0;i<n;i++)
        {
            sm+=a[i];
            ll ms=0,bnt=LLONG_MIN,x=0;
            bool f=true;
            for(int j=0;j<n;j++)
            {
                ms+=a[j];
                x++;
                if(ms==sm)
                {
                    bnt=max(bnt,x);
                    x=0;
                    ms=0;
                }
                else if(ms>sm)
                {
                    f=false;
                    break;
                }
            }
            if(ms<sm && ms>0)f=false;
            if(f)
            {
                g=true;
              //  cout<<i+1<<nl;
                cnt=min(cnt,bnt);
            }
        }
        if(g)cout<<cnt<<nl;
        else cout<<n<<nl;
    }
    return 0;
}

/*
sm+=a[i];
            ll ms=0,bnt=LLONG_MIN,x=0;
            bool f=true;
            for(int j=i+1;j<n;j++)
            {
                ms+=a[j];
                x++;
                if(ms==sm)
                {
                    ms=0;
                    bnt=max(x,bnt);
                    x=0;
                }
                else if(ms>sm)
                {
                    f=false;
                    break;
                }
            }
            //bnt=max(x,bnt);
            if(f)
            {
                cnt=min({cnt,bnt,0LL});
                g=true;
            }
*/