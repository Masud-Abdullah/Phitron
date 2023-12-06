#include<bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   pi         pair<int,int>
#define   rv(v)      v.begin(),v.end()
#define   sz(v)      v.size()
#define   mm(a,x)    memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;

    int t;
    cin>>t;
    while(t--)
    {
        int ans=0,f=0;
        char i,j;
        string s;
        cin>>s;

        for(i='a';i<='z';i++)
        {
            for(j='a';j<='z';j++)
            {
                if(i!=j)
                {
                    ans++;
                    if(i==s[0] && j==s[1])
                    {
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)break;
        }
        cout<<ans<<nl;
    }

    return 0;
}
