#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    a[0]=0;

    for(int i=1;i<=n;i++)
    {
        a[i]+=a[i-1];
    }

    for(int i=n;i>=1;i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}