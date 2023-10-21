#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,f=0;
        cin>>n;
        string s="meow",str1;
        cin>>str1;

        for(i=0;i<str1.size();i++)
        {
            if(str1[i]>='A' && str1[i]<='Z')str1[i]+=32;
        }

        string str2;

        str2+=str1[0];

        for(i=1;i<str1.size();i++)
        {
            if(str1[i]!=str1[i-1])
            {
                str2+=str1[i];
                //x++;
            }
            else continue;
        }
        //str2[x]='\0';

        //cout<<str2<<nl;

        if(str2==s)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

    }

    return 0;
}