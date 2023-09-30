#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;      cin>>n;
    long long int a[n];   for(int i=0;i<n;i++)cin>>a[i];
    long long int sm=0,mn=LLONG_MAX,cnt=0;
    for(int i=0;i<n;i++)
    {
        sm+=a[i];
        if(a[i]%2)mn=min(mn,a[i]);
        if(a[i]%2)cnt++;
    }
    if(cnt%2==0)cout<<sm<<'\n';
    else cout<<sm-mn<<'\n';

    return 0;
}