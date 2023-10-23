#include<bits/stdc++.h>
using namespace std;
/// kono number er binary representation theke right most set bit ta remove korar jonno
/// oi number ar er ager number er moddhe and operation korte hoy. (n&(n-1)); ---> etar output
/// jeta ashbe oitai holo right most set bit remove korar por jei number ashe oi number ta.
/// but jodi oi number ta 2^x hoy (like: 1,2,4,8,16,32) tahole er ager number er sathe 
/// and korle right most set bit remove hobe but output zero ashbe.  karon 2^x type number 
/// gulote ektai set bit thake ar oita holo left most bit ar right  er baki shob zero thake.
/// like 16--> 10000  , 15----> 01111  . tai oi ekmatro set bit remove korle output zero choila ashe.
int main()
{
    /// Obserbation: odd shob guloriy odd divisor ase ar oita holo oi number nijei.
    /// ar even er khetre jodi 2^x hoy taile oi number er kono odd divisor thakbe na and thaka
    /// possible o na. otherwise possible. mane otherwise atleast ekta odd divisor thakbei
    int t;cin>>t;
    while(t--)
    {
        long long int n;cin>>n;
        long long int ans = (n&(n-1));
        if(ans==0)cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}