#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int k,n,i=1;cin>>k>>n;
        vector<int>v;
        int cnt[41]={0};
        while(i<=n)
        {
            if(v.size()==k)break;
            v.push_back(i);
            cnt[i]++;
            i+=v.size();
        }
        for(int i=n;i>=1;i--)
        {
            if(v.size()==k)break;
            if(cnt[i]==0)v.push_back(i);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<'\n';
    }
    return 0;
}