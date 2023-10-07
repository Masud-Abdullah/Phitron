#include<bits/stdc++.h>
#define   nl      "\n"
#define   ll      long long
#define   pii     pair<int,int>
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    ll n,i,j,count=0;
    cin>>n;
    ll a[n]={0};
    ///memset(a,0,sizeof(a));


    for(i=2;i*i<=n;i++)
	{
		if(a[i]==0)
		{
			for(j=i*i;j<=n;j+=i)
			{
				a[j]=1;
			}
		}
	}

	for(i=1;i<=n;i++)
	{
	    ll cnt1=0;
	    for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                if(a[j]==0)cnt1++;
            }
        }
        if(cnt1==2)count++;
	}
	cout<<count<<nl;


	/*for(i=2;i<=n;i++)
	{
		if(a[i]==0)cout<<i<<" ";
	}
	cout<<endl;

*/



    return 0;
}