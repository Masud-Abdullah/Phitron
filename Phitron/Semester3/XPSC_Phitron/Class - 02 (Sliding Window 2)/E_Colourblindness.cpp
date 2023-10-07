#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s,r;cin>>s>>r;
        bool f=true;
        for(int i=0;i<s.size();i++)
        {
            if((s[i]=='R'&&r[i]!='R')||(s[i]!='R'&&r[i]=='R'))f=false;
        }
        if(!f)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}