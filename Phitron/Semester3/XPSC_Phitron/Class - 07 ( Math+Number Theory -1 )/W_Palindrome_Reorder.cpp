#include <bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long int
#define   sz(v)      v.size()
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    string s;cin>>s;
    map<char,ll>cnt;
    for(ll i=0;i<sz(s);i++)
    {
        cnt[s[i]]++;
    }
    ll od=0;
    char special;
    for(char i='A';i<='Z';i++)
    {
        if(cnt[i]%2)
        {
            od++;
            special=i;
        }
    }
    if(od>1)cout<<"NO SOLUTION"<<nl;
    else
    {
        char ans[sz(s)+1];
        ll fr=0,l=sz(s)-1;
        ans[sz(s)]='\0';

        if(od==1)
        {
            ll x=sz(s)/2;
            ans[x]=special;
            cnt[special]--;
        }

        for(char i='A';i<='Z';i++)
        {
            bool f=true;
            while(cnt[i])
            {
                cnt[i]--;
                if(f)
                {
                    ans[fr]=i;
                    f=false;
                    fr++;
                }
                else
                {
                    ans[l]=i;
                    f=true;
                    l--;
                }
            }
        }
        for(ll i=0;i<sz(s);i++)
        {
            cout<<ans[i];
        }
        cout<<nl;
    }

    return 0;
}

