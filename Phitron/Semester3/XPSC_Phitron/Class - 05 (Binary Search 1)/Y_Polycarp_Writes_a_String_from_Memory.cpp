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
int main()
{
    FIO;
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int ans=0,x=0;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]]==0)
            {
                x++;
                mp[s[i]]++;
            }
            if(x==4)
            {
                ans++;
                x=1;
                mp.clear();
                mp[s[i]]++;
            }
        }
        if(ans==0)cout<<1<<nl;
        else if(x<=3)cout<<ans+1<<nl;
        else cout<<ans<<nl;
    }
    return 0;
}

