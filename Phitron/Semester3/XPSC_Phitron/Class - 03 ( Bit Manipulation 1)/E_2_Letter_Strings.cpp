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
#define FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
map<string, ll> str;
int main()
{
    FIO;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, cnt = 0;
        cin >> n;
        string s[n];
        for (int i = 0; i < n; i++) cin >> s[i];

        string alp = "abcdefghijklmnopqrstuvwxyz";
        // cout<<alp<<nl;

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < 26; j++)
            {
                if (s[i][1] != alp[j])
                {
                    string tp = "";
                    tp += s[i][0];
                    tp += alp[j];
                    if (str[tp] > 0) cnt += str[tp];
                }

                if (s[i][0] != alp[j])
                {
                    string tp = "";
                    tp += alp[j];
                    tp += s[i][1];
                    if (str[tp] > 0) cnt += str[tp];
                }
            }
            str[s[i]]++;
        }
        cout << cnt << nl;
        str.clear();
    }
    return 0;
}
