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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    map<string, ll> mp;

    for (int i = 0; i < s.size() - 1; i++)
    {
        string x = "";
        x += s[i];
        x += s[i + 1];
        mp[x]++;
    }
    ll mx = LLONG_MIN;
    string ans;
    for (int i = 0; i < s.size() - 1; i++)
    {
        string x = "";
        x += s[i];
        x += s[i + 1];
        if (mp[x] > mx)
        {
            mx = mp[x];
            ans = x;
        }
    }
    cout << ans << nl;
    mp.clear();
    return 0;
}
