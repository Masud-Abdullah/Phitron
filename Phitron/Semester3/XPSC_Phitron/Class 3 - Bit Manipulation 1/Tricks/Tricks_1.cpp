#include<bits/stdc++.h>
using namespace std;
///x^x==0  //same value xor korle 0 hoy.ar different value xor korle 1 hoy.
/// array te shob number even times just ekta number odd times thakle evabe 
///kore oi odd times jei number ta ase oita ber kora jay.
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    for(int i=0;i<n;i++)ans^=a[i];
    cout<<ans<<'\n';
    return 0;
}