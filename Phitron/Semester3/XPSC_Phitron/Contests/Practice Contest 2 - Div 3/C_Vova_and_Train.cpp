#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll L, v, l, r;
        cin >> L >> v >> l >> r;
        ll result_Of_afterR = (L / v) - (r / v); // r er porer part er ans
        ll result_Of_beforeL = (l - 1) / v;      // l er ager part er ans
        ll ans = result_Of_afterR + result_Of_beforeL;
        cout << ans << '\n';
    }
    return 0;
}