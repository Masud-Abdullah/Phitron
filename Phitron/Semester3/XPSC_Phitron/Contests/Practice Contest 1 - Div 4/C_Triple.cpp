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

        int x=-1;

        for(int i=0;i<n-2;i++)
        {
            if(a[i]==a[i+1] && a[i+1]==a[i+2])
            {
                x=a[i];
                break;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}