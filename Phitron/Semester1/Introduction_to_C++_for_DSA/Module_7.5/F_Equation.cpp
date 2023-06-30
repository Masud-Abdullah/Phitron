#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll x, n, ans = 0;
    cin >> x >> n;

    for (int i = 2; i <= n; i += 2)
    {
        ll tm = 1;
        for (int j = 1; j <= i; j++)
        {
            tm *= x;
        }
        ans += tm;
    }
    cout << ans << endl;
    return 0;
}
/*
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(ll x,ll n){
    ll ans=0;
    for(int i=2;i<=n;i+=2)
    {
        ll tm=1;
        for(int j=1;j<=i;j++)
        {
            tm*=x;
        }
        ans+=tm;
    }
    cout<<ans<<endl;
}
int main()
{
    ll x,n;
    cin>>x>>n;
    solve(x,n);


    return 0;
}
*/
// #include <bits/stdc++.h>
// using namespace std;

// void solve(int x,int n)
// {
//     long long ans = 0,val=1;
//     for (int i = 2; i <= n; i+=2)
//     {
//         ans += (long long)(pow(x,i)+.5);
//     }

//     cout << ans << endl;

// }

// int main()
// {
//     int x,n;
//     cin >> x >> n;

//     solve(x,n);

//     return 0;
// }