#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    int k;
    cin>>k;

    int l=0,r=n-1,mid=(l+r)/2,indx;
    while(l<=r)
    {
        if(a[mid]==k)
        {
            cout<<mid<<'\n';
            indx=mid;
            break;
        }

        if(k<a[mid])
        {
            r=mid-1;
            mid=(l+r)/2;
        }
        else if(k>a[mid])
        {
            l=mid+1;
            mid=(l+r)/2;
        }
    }

    if(indx==0)
    {
        if(a[1]==k)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else if(indx==n-1)
    {
        if(a[n-1]==k)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else
    {
        if(a[mid+1]==k || a[mid-1]==k)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}