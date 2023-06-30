#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans1 = (s[0] - '0' + s[1] - '0' + s[2] - '0');
        int ans2 = (s[3] - '0' + s[4] - '0' + s[5] - '0');
        if (ans1 == ans2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
// Asif abdullah er code.
/*
#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define sort(a) sort(a, a + n)
#define rev(a) reverse(a, a + n)
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
int main()
{
    FIO;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sum1=0,sum2=0;
        for (int i = 0,j=5; i < 3; i++,j--)
        {
            sum1 += s[i]-'0';
            sum2 += s[j]-'0';
        }

        if(sum1 == sum2) yy;
        else nn;
    }

    return 0;
}

*/