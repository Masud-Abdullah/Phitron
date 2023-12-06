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
#define   sz(v)      (int)v.size()
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
        string s1,s2;cin>>s1>>s2;
        if(s1==s2)cout<<"="<<'\n';
        else if(s1[sz(s1)-1]=='S' && s2[sz(s2)-1]=='S')
        {
            if(sz(s1)>sz(s2))cout<<"<"<<nl;
            else cout<<">"<<nl;
        }
        else if(s1[sz(s1)-1]=='L' && s2[sz(s2)-1]=='L')
        {
            if(sz(s1)>sz(s2))cout<<">"<<nl;
            else cout<<"<"<<nl;
        }
        else if(s1[sz(s1)-1]=='S' && s2[sz(s2)-1]=='L')cout<<"<"<<nl;
        else if(s1[sz(s1)-1]=='L' && s2[sz(s2)-1]=='S')cout<<">"<<nl;
        else if(s1[sz(s1)-1]=='S' && s2[sz(s2)-1]=='M')cout<<"<"<<nl;
        else if(s1[sz(s1)-1]=='M' && s2[sz(s2)-1]=='S')cout<<">"<<nl;
        else if(s1[sz(s1)-1]=='L' && s2[sz(s2)-1]=='M')cout<<">"<<nl;
        else if(s1[sz(s1)-1]=='M' && s2[sz(s2)-1]=='L')cout<<"<"<<nl;
    }
    return 0;
}
