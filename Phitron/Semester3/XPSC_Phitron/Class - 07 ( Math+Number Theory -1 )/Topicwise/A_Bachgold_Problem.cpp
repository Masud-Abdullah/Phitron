#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define  FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll n,i;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<nl;
        for(i=1;i<=n/2;i++)
        {
            cout<<2<<" ";
        }
        cout<<nl;
    }
    else
    {
        cout<<((n-3)/2)+1<<nl;
        cout<<3<<" ";
        for(i=1;i<=(n-3)/2;i++)
        {
            cout<<2<<" ";
        }
        cout<<nl;
    }

    return 0;
}