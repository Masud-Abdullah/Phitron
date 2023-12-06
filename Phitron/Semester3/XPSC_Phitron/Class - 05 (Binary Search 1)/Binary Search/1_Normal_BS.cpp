#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    int x;cin>>x;
    int lo=1,hi=n,ans=-1,mid;
    while(lo<=hi)
    {
        mid = (lo+hi)/2;
        if(a[mid]==x)
        {
            ans=mid;
            break;
        }
        else if(a[mid]>x)hi=mid-1;
        else if(a[mid]<x)lo=mid+1;
    }
    if(ans==-1)cout<<"Not Found\n";
    else cout<<"Found at index: "<<ans<<'\n';
    return 0;
}