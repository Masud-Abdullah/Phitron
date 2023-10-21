#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    string pi="314159265358979323846264338327";
    while(t--)
    {
        string s;cin>>s;
        int cnt=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=pi[i])break;
            cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}