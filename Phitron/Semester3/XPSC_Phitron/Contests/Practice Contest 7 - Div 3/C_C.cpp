#include<bits/stdc++.h>
#define   nl      "\n"
#define   ll      long long
#define   pii     pair<int,int>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

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

        for(i=0; i<n-1; i++)
        {
            if(a[i]!=a[i+1])f=1;
            else continue;
        }

        if(f==0)cout<<-1<<nl;
        else
        {
            ll indx=*max_element(a,a+n);

            for(i=0,j=1;i<n-1;i++,j++)
            {
                if(a[i]==indx && a[i]>a[i+1])
                {
                    cout<<i+1<<nl;
                    break;
                }
                else if(a[j]==indx && a[j]>a[j-1])
                {
                    cout<<j+1<<nl;
                    break;
                }
            }
        }



    }
    return 0;
}