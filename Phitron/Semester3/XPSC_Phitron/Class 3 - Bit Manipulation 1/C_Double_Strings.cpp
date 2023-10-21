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
map<string,int>mp;
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        string s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            mp[s[i]]++;
        }
        vll ans;
        for(int i=0;i<n;i++)
        {
            string tp="";
            bool f=false;
            for(int j=0;j<s[i].size()-1;j++)
            {
                tp+=s[i][j];
                string ts="";
                for(int k=j+1;k<s[i].size();k++)
                {
                    ts+=s[i][k];
                }
                if(mp[tp]>0 && mp[ts]>0)f=true;
            }
            if(f)ans.pb(1);
            else ans.pb(0);
        }

        for(auto val:ans)cout<<val;
        cout<<nl;

        mp.clear();
    }
    return 0;
}

