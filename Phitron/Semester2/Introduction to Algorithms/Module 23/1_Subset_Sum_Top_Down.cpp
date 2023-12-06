#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool subset_sum(int n, int a[], int s)
{
    if (n == 0)
    {
        if (s == 0)
            return true;
        else
            return false;
    }

    if (dp[n][s] != -1)
        dp[n][s];
    if (a[n] <= s)
    {
        bool op1 = subset_sum(n - 1, a, s - a[n]); // nibo //
        bool op2 = subset_sum(n - 1, a, s);        // nibo na //
        return dp[n][s] = op1 || op2;              // jekono ekta true hoilei true return kore, shob false hoilei false return kore //
    }
    else
        return dp[n][s] = subset_sum(n - 1, a, s);
}
int main()
{
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int s;
    cin >> s;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            dp[i][j] = -1;
        }
    }

    if (subset_sum(n, a, s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}