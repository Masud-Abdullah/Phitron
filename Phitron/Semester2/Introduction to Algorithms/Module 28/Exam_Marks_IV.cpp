#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
const ull N = 1e9 + 7;
int main()
{
    // Using unsigned long long for more safety hehe
    int t;
    cin >> t;
    while (t--)
    {
        ull n, m;
        cin >> n >> m;
        ull a[n + 1];
        for (ull i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        ull target = 1000 - m;

        ull dp[n + 1][target + 1];

        dp[0][0] = 1;
        for (ull i = 1; i <= target; i++)
        {
            dp[0][i] = 0;
        }

        for (ull i = 1; i <= n; i++)
        {
            for (ull j = 0; j <= target; j++)
            {
                if (a[i] <= j)
                {
                    dp[i][j] = (dp[i][j - a[i]] + dp[i - 1][j]) % N;
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        // for(int i=1;i<=n;i++)

        cout << dp[n][target] << '\n';
    }
    return 0;
}