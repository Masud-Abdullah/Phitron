#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n;cin>>n;
        int x=9,ans=0,y=0;
        while(y<n)
        {
            if(y+x<=n)
            {
                ans= (ans*10)+x;
                y+=x;
            }
            else 
            {
                ans= (ans*10)+(n-y);
                y+=x;
            }
            x--;
        }
        string s = to_string(ans);
        reverse(s.begin(),s.end());
        cout<<s<<'\n';
    }
    return 0;
}