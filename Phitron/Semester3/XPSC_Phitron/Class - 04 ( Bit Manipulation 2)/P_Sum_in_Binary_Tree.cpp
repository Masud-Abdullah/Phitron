#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long int n;cin>>n;
        long long int sm=0;
        while(n>0)
        {
            sm+=n;
            n/=2;
        }
        cout<<sm<<'\n';
    }
    return 0;
}