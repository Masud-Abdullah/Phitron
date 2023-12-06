#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,l;cin>>n>>k>>l;
        pair<int,int>a[n];
        vector<int>ans;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i].first>>a[i].second;
            if(a[i].second==l)
            {
                ans.push_back(a[i].first);
                cnt++;
            }
        }
        if(cnt<k)
        {
            cout<<-1<<endl;
            continue;
        }
        int val=0;
        sort(ans.begin(),ans.end(),greater<int>());
        for(int i=0;i<k;i++)val+=ans[i];
        if(val>0)cout<<val<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}