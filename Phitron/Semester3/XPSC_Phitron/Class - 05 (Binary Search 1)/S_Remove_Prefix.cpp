#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int cnt=0;
        map<int,int>mp;
        for(int i=n-1;i>=0;i--)
        {
            if(mp[a[i]]!=0)break;
            mp[a[i]]++;
            cnt++;
        }
        cout<<n-cnt<<'\n';
    }
    return 0;
}