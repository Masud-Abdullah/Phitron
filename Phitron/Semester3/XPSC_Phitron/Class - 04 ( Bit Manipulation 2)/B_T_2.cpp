#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if((a[i]&m) == m)
            {
                ans.push_back(a[i]);
            }
        }
        if(ans.size()==0)
        {
            cout<<"NO\n";
            continue;
        }
        int ck=ans[0];
        for(int i=0;i<ans.size();i++)ck&=ans[i];
        if(ck==m)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}