#include<bits/stdc++.h>
using namespace std;
int main()
{
    //count set bits in binary representation of any number
    int n;cin>>n;
    int ans=0;
    while(n>0)
    {
        ans+= n&1;
        n = n>>1;
    }
    cout<<ans<<'\n';
    return 0;
}

//____________________Bangla Approach________________________
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //count set bits in binary representation of any number
    int n;cin>>n;
    int ans=0;
    while(n>0)
    {
        ans+= n%2;
        n/=2;
    }
    cout<<ans<<'\n';
    return 0;
}
*/