#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;cin>>n;
    long long int ans = 0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
            {
                ans+=__gcd(__gcd(i,j),k);
            }
        }
    }
    cout<<ans<<'\n';
    return 0;
}