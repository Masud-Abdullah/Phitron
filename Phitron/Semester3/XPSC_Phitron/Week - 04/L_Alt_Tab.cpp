#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    string s[t];
    for(int i=0;i<t;i++)cin>>s[i];
    map<string,int>mp;
    vector<string>ans;
    for(int i=t-1;i>=0;i--)
    {
        string x="";
        x+=s[i][s[i].size()-2];
        x+=s[i][s[i].size()-1];
        if(mp[s[i]]==0)
        {
            mp[s[i]]++;
            ans.push_back(x);
        }
    }
   // for(int i=0;i<t;i++)cout<<s[i]<<'\n';
    for(int i=0;i<ans.size();i++)cout<<ans[i];
    return 0;
}