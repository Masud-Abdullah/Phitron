#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n + 1], sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        int target = 1000 - m;
        if (target == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        bool dp[n + 1][target + 1];
        dp[0][0] = true;
        for (int i = 1; i <= target; i++)
            dp[0][i] = false;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= target; j++)
            {
                if (a[i] <= j)
                {
                    dp[i][j] = dp[i - 1][j - a[i]] || dp[i - 1][j];
                }
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }

        bool ans = false;

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= target; j++)
            {
                if (dp[i][j] == 1)
                {
                    if (j == target)
                        ans = true;
                }
            }
        }

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}