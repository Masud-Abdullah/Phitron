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
        int cnt=1;
        sort(a,a+n);
        for(int i=1;i<n;i++)if(a[i-1]!=a[i])cnt++;

        if((n-cnt)%2)cout<<cnt-1<<endl;
        else cout<<cnt<<endl;
        
    }
    return 0;
}