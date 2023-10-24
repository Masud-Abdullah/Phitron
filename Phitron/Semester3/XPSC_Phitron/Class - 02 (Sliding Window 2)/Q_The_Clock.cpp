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
#define   ceil(a,b)  (a+b-1)/b
#define   jog(v)     accumulate(v.begin(), v.end(), 0)
#define   gun(v)     accumulate(v.begin(), v.end(), 1, multiplies<int>())
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
bool palindrome(string s)
{
    ll l=0,r=4;
    while(l<r)
    {
        if(s[l]!=s[r])return false;
        l++;r--;
    }
    return true;
}
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        ll x;cin>>x;

        ll h=x/60,m=x%60;
        ll ans=0;
        map<string,bool>visited;
        while(!visited[s])
        {
            if(palindrome(s))ans++;
            visited[s]=true;

            ll hh = ((s[0]-'0')*10)+(s[1]-'0');
            ll mm = ((s[3]-'0')*10)+(s[4]-'0');

            mm+=m;
            if(mm>59)
            {
                hh++;
            }
            mm%=60;

            hh+=h;
            hh%=24;

            s[0] = ('0'+(hh/10));
            s[1] = ('0'+(hh%10));

            s[3] = ('0'+(mm/10));
            s[4] = ('0'+(mm%10));
        }
        cout<<ans<<'\n';
    }
    return 0;
}

