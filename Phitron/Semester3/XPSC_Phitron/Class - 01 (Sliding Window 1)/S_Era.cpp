#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;        cin>>n;
        int a[n+1];   for(int i=1;i<=n;i++)cin>>a[i];

        int sm=0;
        for(int i=1;i<=n;i++)
        {
            if(a[i]>i+sm)
            {
                sm+=a[i]-(i+sm);
                //cout<<sm<<'\n';
            }
        }
        //cout<<'\n';
        cout<<sm<<'\n';
    }
    return 0;
}