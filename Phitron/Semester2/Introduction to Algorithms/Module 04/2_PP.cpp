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

    int l=0,r=n-1,mid=(l+r)/2;
    while(l<=r)
    {
        if(a[mid]==k)
        {
            cout<<mid<<'\n';
            return 0;
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
    cout<<"Not Found\n";
    
    return 0;
}