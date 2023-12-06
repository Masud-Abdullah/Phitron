#include <bits/stdc++.h>
#define   nl         "\n"
#define   all(v)     v.begin(),v.end()
#define   ll         long long int
#define   pb         push_back
#define   vii        vector< int >
#define   vll        vector< ll >
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
vll preCal;
bool isPalindrome(ll n)
{
    string ans1=to_string(n);
    string ans2=ans1;
    reverse(all(ans2));
    return ans1==ans2;
}
void preCalculate()
{
    for(ll i=0;i<(1<<15);i++)
    {
        if(isPalindrome(i))preCal.pb(i);
    }
}
int main()
{
    FIO;
    preCalculate();
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll a[n];
        unordered_map<ll,ll>mp;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        ll cnt=n;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<preCal.size();j++)
            {
                ll tmp=a[i]^preCal[j];
                if(mp[tmp])cnt+=mp[tmp];
            }
        }
        cout<<cnt/2<<nl;
    }
    return 0;
}