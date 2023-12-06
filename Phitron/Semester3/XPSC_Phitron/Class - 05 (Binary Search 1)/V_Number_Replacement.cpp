#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,j,f=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++)cin>>a[i];

        string s;
        cin>>s;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    if(a[i]==a[j] && s[i]!=s[j])
                    {
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)break;
        }

        if(f==1)cout<<"NO"<<nl;
        else cout<<"YES"<<nl;

    }

    return 0;
}