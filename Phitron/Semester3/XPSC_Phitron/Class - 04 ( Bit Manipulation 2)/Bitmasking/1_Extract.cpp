#include<bits/stdc++.h>
using namespace std;
int main()
{    /// If we want to check the xth bit of N is 0 or 1??? 
     /// we have to do bitwise AND(&) operation with the mask of N.
     /// what is mask??? mask of N is a a number whose binary representation has 1 on 
     /// that bit which bit we want to check and all the other bits are 0.
    int n;cin>>n;
    int x;cin>>x; // here x is : we want to check the xth bit of n is 0 or 1?
    int mask = 1<<x;
    if((n&mask) == 0)cout<<"The xth bit of n is : "<<0<<'\n';
    else cout<<"The xth bit of n is : "<<1<<'\n';
    return 0;
}