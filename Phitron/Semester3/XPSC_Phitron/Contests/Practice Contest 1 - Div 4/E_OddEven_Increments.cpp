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

        bool f=true;
        int x,y;
        if(a[0]%2==0)x=0;
        else x=1;

        if(a[1]%2==0)y=0;
        else y=1;


        for(int i=2;i<n;i++)
        {
            if(i%2==0)
            {
                if(x==0 && a[i]%2!=0)f=false;
                else if(x==1 && a[i]%2==0)f=false;
            }
            else
            {
                if(y==0 && a[i]%2!=0)f=false;
                else if(y==1 && a[i]%2==0)f=false;
            }
        }

        if(f)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}