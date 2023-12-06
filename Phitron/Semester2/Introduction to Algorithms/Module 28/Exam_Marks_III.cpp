#include <bits/stdc++.h>
using namespace std;
const int INF = 1e9;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int target = 1000 - m;

        int dp[n + 1][target + 1];

        dp[0][0] = 0;
        for (int i = 1; i <= target; i++)
            dp[0][i] = INF - 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= target; j++)
            {
                if (a[i] <= j)
                {
                    dp[i][j] = min(dp[i][j - a[i]] + 1, dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        if (dp[n][target] == INF - 1)
            cout << "-1" << endl;
        else
            cout << dp[n][target] << endl;
    }
    return 0;
}