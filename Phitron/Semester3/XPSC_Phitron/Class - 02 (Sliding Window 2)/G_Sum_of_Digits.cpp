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
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int sum(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans += (s[i] - '0');
    }
    return ans;
}
int main()
{
    FIO;
    int cnt = 0;
    string s;
    cin >> s;
    while (s.size() != 1)
    {
        cnt++;
        int x = sum(s);
        s = to_string(x);
    }
    cout << cnt << '\n';
    return 0;
}