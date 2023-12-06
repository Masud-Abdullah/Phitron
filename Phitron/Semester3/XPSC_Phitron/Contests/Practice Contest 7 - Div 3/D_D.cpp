#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "No\n")
#define yy (cout << "Yes\n")
#define ll long long int
#define FIO     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
ll n,a,b;
bool ans(ll val)
{
    if (val > n)return false;
    if (val == n)return true;
    bool x = ans(a * val);
    bool y = ans(val + b);
    return x || y;
}
int main()
{
    FIO;
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> a >> b;
        //cout<<n<<" "<<a<<" "<<b<<nl;
        if (ans(1))yy;
        else nn;
        return 0;
    }
}
