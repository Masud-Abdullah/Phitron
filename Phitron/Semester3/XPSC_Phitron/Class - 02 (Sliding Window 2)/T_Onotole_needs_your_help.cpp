#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n-1;i++)
    {
        if(a[i-1]!=a[i] && a[i]!=a[i+1])
        {
            cout<<a[i]<<'\n';
            return 0;
        }
    }
    if(a[0]!=a[1])cout<<a[0]<<'\n';
    else cout<<a[n-1]<<'\n';
    return 0;
}