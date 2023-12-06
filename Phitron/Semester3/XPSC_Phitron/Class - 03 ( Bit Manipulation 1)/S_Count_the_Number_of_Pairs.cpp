#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        string s;cin>>s;
        pair<int,int>cnt[27];
        int ans=0,track=k;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z')cnt[s[i]-97].first++;
            else cnt[s[i]-65].second++;
        }

        for(int i=0;i<26;i++)
        {
            ans+=min(cnt[i].first,cnt[i].second);
            int x=abs(cnt[i].first-cnt[i].second);
            while(x>1 && track>0)
            {
                x-=2;
                track--;
                ans++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}