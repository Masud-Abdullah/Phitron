#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        long long int x=stoi(s);
        string ans="1";
        for(int i=1;i<s.size();i++)ans+='0';
        long long int y=stoi(ans);
        cout<<x-y<<'\n';
        //cout<<x<<'\n';
    }

    return 0;
}