#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;cin>>a>>b;
    int GCD = __gcd(a,b);  // Complexity log(N);
    int LCM = (a/GCD)*b; //(a*b)/GCD
    cout<<GCD<<" "<<LCM<<'\n';
    return 0;
}