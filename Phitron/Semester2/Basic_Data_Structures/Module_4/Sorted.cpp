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
        bool f=true;
        for(int i=0;i<n;i++)cin>>a[i];

        for(int i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1])
            {
                f=false;
                break;
            }
        }

        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}