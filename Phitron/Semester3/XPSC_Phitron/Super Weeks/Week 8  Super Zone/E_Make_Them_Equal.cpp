#include <bits/stdc++.h>
#define   nl         "\n"
#define   NN         (cout << "NO\n")
#define   YY         (cout << "YES\n")
#define   nn         (cout << "No\n")
#define   yy         (cout << "Yes\n")
#define   ss         second
#define   ff         first
#define   all(v)     v.begin(),v.end()
#define issort(a) is_sorted(a.begin(),a.end())
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
        ll n,ev=0,od=0;cin>>n;
        char c;cin>>c;
        string s;cin>>s;
        s='.'+s;
        //cout<<s<<nl;
        bool f=true;
        for(ll i=1;i<=n;i++)
        {
            if(s[i]!=c)
            {
                f=false;
                break;
            }
        }

        if(f)
        {
            cout<<0<<nl;
            continue;
        }

        for(ll i=1;i<=n;i++)
        {
            f=true;
            /// Obserbation
            /// just checking that ekhane emon kono number ase naki je 1-n er moddhe kono number kei devide kore na. ar normally kono number tar multiple chara onno kauke devide kore na. so eituku check kore emon kono number pailei bujhbo je ei number tai ans.
            /// ar emon kono number na paile ans hobe 2,n,n-1. 
            for(ll j=i;j<=n;j+=i)
            {
                if(s[j]!=c)
                {
                    f=false;  
                    break;
                }
            }

            if(f)
            {
                cout<<1<<nl<<i<<nl;
                break;
            }
        }
        if(!f)cout<<2<<nl<<n<<" "<<n-1<<nl;
        
    }
    return 0;
}

