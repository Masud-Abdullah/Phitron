#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool ans(int n, int a[], int target)
{
    if (n == 0)
    {
        if (target == 0)
            return true;
        else
            return false;
    }

    if (dp[n][target] != -1)
        return dp[n][target];
    if (a[n] <= target)
    {
        bool op1 = ans(n, a, target - a[n]);
        bool op2 = ans(n - 1, a, target);
        return dp[n][target] = op1 || op2;
    }
    else
        return dp[n][target] = ans(n - 1, a, target);
}
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
        {
            cin >> a[i];
        }
        int target = 1000 - m;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= target; j++)
            {
                dp[i][j] = -1;
            }
        }

        if (ans(n, a, target))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}