#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i>0)a[i]+=a[i-1];
    }
    int q;cin>>q;
    while(q--)
    {
        int i,j;cin>>i>>j;
        if(i>0 && j>0)cout<<a[j]-a[i-1]<<endl;
        else cout<<a[j]<<endl;
    }
    return 0;
}