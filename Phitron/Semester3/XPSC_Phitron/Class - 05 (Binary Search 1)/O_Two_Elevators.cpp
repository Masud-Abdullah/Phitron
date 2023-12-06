#include<bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,ans=0;
        cin>>a>>b>>c;

            if(b<=c)
            {
                ans+=(c-b);
                ans+=c;
            }
            else if(b>c)
            {
                ans+=b;
            }

        if(a<ans)cout<<1<<nl;
        else if(ans<a)cout<<2<<nl;
        else cout<<3<<nl;
    }


    return 0;
}