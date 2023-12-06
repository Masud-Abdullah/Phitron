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
        ll n,m;cin>>n>>m;
        string s,k;cin>>s>>k;
        ll cnt=0,mx=LLONG_MAX;
        for(int i=0;i<=n-m;i++)
        {
            cnt=0;
            for(int j=0;j<m;j++)
            {
                string p="";p+=s[i+j];
                string q="";q+=k[j];
                //cout<<p<<" "<<q<<"   ";
                ll x=stoi(p);
                ll y=stoi(q);
                if(x<y)cnt+=min((abs(x-y)),((9-y)+x+1LL));
                else if(x>y)cnt+=min((abs(x-y)),((9-x)+y+1LL));
               // cout<<cnt<<" ";
            }
           //cout<<nl;
            mx=min(mx,cnt);
        }
        //cout<<nl;
        cout<<mx<<nl;
    }
    return 0;
}

