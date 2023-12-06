#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int cnt=0;
        while(n>1)
        {
            n>>=1;  // n ke 1 bar left shift korechi mane half korechi.
            cnt++;
        }
        int  p = 1<<cnt;  //1 ke cnt bar right shift korechi.
                          // mane double korechi. and 2^cnt er shoman korechi.
        cout<<p-1<<'\n';
    }
    return 0;
}