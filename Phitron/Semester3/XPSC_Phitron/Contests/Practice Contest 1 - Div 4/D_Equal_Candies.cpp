#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];

        sort(a,a+n);

        int mn=a[0],sm=0;

        for(int i=0;i<n;i++)sm+=abs(mn-a[i]);

        cout<<sm<<endl;
    }
    return 0;
}