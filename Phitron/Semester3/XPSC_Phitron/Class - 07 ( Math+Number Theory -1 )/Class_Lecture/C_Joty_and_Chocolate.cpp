#include <bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long int
#define   gcd(a, b)  __gcd(a, b)
#define   lcm(a, b)  ((a/gcd(a,b)) * b)
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll n,a,b,p,q;cin>>n>>a>>b>>p>>q;
    ll aD=0,bD=0,cD=0;
    
    cD=n/lcm(a,b);
    aD=n/a;
    bD=n/b;
    aD-=cD;
    bD-=cD;
    cout<<(aD*p)+(cD*max(p,q))+(bD*q)<<nl;
    //cout<<aD<<" "<<bD<<" "<<cD<<nl;
    
    return 0;
}