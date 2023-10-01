#include<bits/stdc++.h>
using namespace std;
int cnt[26];
int main()
{
    string s;       cin>>s;
    sort(s.begin(),s.end());

    for(int i=0;i<s.size();i++)
    {
        cnt[s[i]-97]++;
    }

    for(int i=0;i<26;i++)
    {
        if(cnt[i]==0)
        {
            printf("%c",i+'a');
            return 0;
        }
    }

    cout<<"None\n";
    return 0;
}