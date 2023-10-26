#include <bits/stdc++.h>
#define nl "\n"
#define NN (cout << "NO\n")
#define YY (cout << "YES\n")
#define nn (cout << "No\n")
#define yy (cout << "Yes\n")
#define ss second
#define ff first
#define all(v) v.begin(), v.end()
#define ll long long int
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vii vector<int>
#define vll vector<ll>
#define vpi vector<pii>
#define vpl vector<pll>
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define pi acos(-1.0)
#define ceil(a, b) (a + b - 1) / b
#define jog(v) accumulate(v.begin(), v.end(), 0)
#define gun(v) accumulate(v.begin(), v.end(), 1, multiplies<int>())
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
        ull n, m;
        cin >> n >> m;
        ull cnt = 0;
        for (ull i = m; i <= 10 * m; i += m)
        {
            string s = to_string(i);
            ull x = (s[sz(s) - 1] - '0');
            cnt += x;
        }
        if (m == 1 && n != 1)
            cnt = 45;
        else if (n == 1 && m == 1)
            cnt = 1;
        ull y = n / (m * 10);
        ull z = y * cnt;

        ull p = n % (m * 10);
        ull q = 0;
        for (ull i = m; i <= p; i += m)
        {
            string s = to_string(i);
            ull x = (s[sz(s) - 1] - '0');
            q += x;
        }
        cout << z + q << nl;
    }
    return 0;
}
