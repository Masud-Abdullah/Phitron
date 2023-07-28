#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) (int)v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        ll cnt = 0;
        bool f = true;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                cnt++;

            if (a[i] != a[i + 1])
            {
                cnt++;
                if (cnt % 2 != 0)
                {
                    cout << a[i] << nl;
                    f = false;
                    break;
                }
                else
                    cnt = 0;
            }
        }

        if (f == true)
        {
            if (a[n - 1] == a[n - 2])
                cnt++;

            cout << a[n - 1] << nl;
        }
    }
    return 0;
}
