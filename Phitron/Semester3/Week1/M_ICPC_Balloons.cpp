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
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int ans=n+1;
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}