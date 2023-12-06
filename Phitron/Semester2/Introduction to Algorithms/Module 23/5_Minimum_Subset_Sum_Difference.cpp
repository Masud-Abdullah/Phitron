#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1], sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    bool dp[n + 1][sum + 1];
    dp[0][0] = true;
    for (int i = 1; i <= sum; i++)
        dp[0][i] = false;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (a[i] <= j)
            {
                dp[i][j] = dp[i - 1][j - a[i]] || dp[i - 1][j];
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }

    int ans = INT_MAX;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (dp[i][j] == 1)
            {
                int s1 = j;
                int s2 = sum - j;
                ans = min(ans, abs(s1 - s2));
            }
        }
    }

    cout << ans << endl;
    return 0;
}