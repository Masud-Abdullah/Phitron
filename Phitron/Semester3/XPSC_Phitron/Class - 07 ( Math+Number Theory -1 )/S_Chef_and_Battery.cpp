#include <bits/stdc++.h>
#define   nl         "\n"
#define   NN         (cout << "NO\n")
#define   YY         (cout << "YES\n")
#define   ll         long long int
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        if(n==50)cout<<0<<nl;
        else if(n==0)cout<<25<<nl;
        else if(n<50)
        {
            ll x=50-n;
            if(x%2==0)cout<<x/2<<nl;
            else cout<<((x+1)/2)+2<<nl;
        }
        else
        {
            ll x=n-50;
            if(x%3==0)cout<<x/3<<nl;
            else if(x%3==2)cout<<(x/3)+4<<nl;
            else cout<<((x+1)/3)+2<<nl;
        }
    }
    return 0;
}
