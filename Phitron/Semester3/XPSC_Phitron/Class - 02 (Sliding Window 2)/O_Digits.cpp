#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0;cin>>n>>k;
    while(n>0){n/=k;cnt++;}
    cout<<cnt<<'\n';
    return 0;
}