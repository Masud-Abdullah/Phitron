#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n;
    cin >> n;

    if (n == 1)
        cout << 1 << endl;
    else
    {
        ll ans1 = pow(2, n - 1);
        ll ans2 = pow(2, n - 2);
        cout << ans1 * ans2 << endl;
    }

    return 0;
}

// #include <bits/stdc++.h>
// #define   nl         "\n"
// #define   nn         (cout << "NO\n")
// #define   yy         (cout << "YES\n")
// #define   ss         " "
// #define   ll         long long
// #define   ull        unsigned long long
// #define   gcd(a, b)  __gcd(a, b)
// #define   lcm(a, b)  ((a/gcd(a,b)) * b)
// #define   pii        pair<int,int>
// #define   pll        pair<long long,long long>
// #define   sz(v)      (int)v.size()
// #define   mm(a, x)   memset(a, x, sizeof(a))
// #define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// using namespace std;
// int main()
// {
//     FIO;
//     ll n;
//     cin>>n;
//     if(n==1)cout<<1<<nl;
//     else if(n==2)cout<<2<<nl;
//     else if(n==3)cout<<8<<nl;
//     else if(n==4)cout<<32<<nl;
//     else if(n==5)cout<<128<<nl;
//     else if(n==6)cout<<512<<nl;
//     else if(n==7)cout<<2048<<nl;
//     else if(n==8)cout<<8192<<nl;
//     else if(n==9)cout<<32768<<nl;
//     else if(n==10)cout<<131072<<nl;
//     else if(n==11)cout<<524288<<nl;
//     else if(n==12)cout<<2097152<<nl;
//     else if(n==13)cout<<8388608<<nl;
//     else if(n==14)cout<<33554432<<nl;
//     else if(n==15)cout<<134217728<<nl;
//     else if(n==16)cout<<536870912<<nl;
//     else if(n==17)cout<<2147483648<<nl;
//     else if(n==18)cout<<8589934592<<nl;
//     else if(n==19)
//     {
//         ll ans=1;
//         for(int i=1;i<=35;i++)
//         {
//             ans*=2;
//         }
//         cout<<ans<<nl;
//     }
//     else
//     {
//          ll ans=1;
//         for(int i=1;i<=37;i++)
//         {
//             ans*=2;
//         }
//         cout<<ans<<nl;
//     }
//     return 0;
// }

/*
#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int n;
    cin >> n;

    if(n==1) {
        cout << 1;
        return 0;
    }

    ll val1 = pow(2, n-1);   //Sayem :)
    ll val2 = val1/2;

    cout << val1*val2 << endl;

    return 0;
}

*/