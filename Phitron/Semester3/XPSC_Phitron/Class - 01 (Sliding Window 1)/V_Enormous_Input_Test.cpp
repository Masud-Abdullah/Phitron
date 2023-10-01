#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,cnt=0;      cin>>n>>k;
    while(n--)
    {
        long long int t;    cin>>t;
        if(t%k==0)cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}