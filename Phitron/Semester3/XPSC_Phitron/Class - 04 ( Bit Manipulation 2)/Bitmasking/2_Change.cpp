#include<bits/stdc++.h>
using namespace std;
int main()
{    /// If we want to change the Xth bit of N.
     /// we have to do bitwise XOR(^) operation with N and the mask of N.
     /// what is mask??? mask of N is a a number whose binary representation has 1 on 
     /// that bit which bit we want to check and all the other bits are 0.
    int n;cin>>n;
    int x;cin>>x; // here x is : we want to change the Xth bit of N?
    int mask = 1<<x;
    cout<<(n^mask)<<'\n'; /// If we change the Xth bit of N then the output will be (N^mask of N)
    return 0;
}