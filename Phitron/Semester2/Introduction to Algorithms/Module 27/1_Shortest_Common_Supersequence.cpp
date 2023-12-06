#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();

    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << "Longest Common Subsequence is : " << dp[n][m] << endl;
    cout << "Sortest Common Supersequence is : " << (n + m) - dp[n][m] << endl; // duita string er LCS theke string duitar length er sum biyog korle SCS pawa jabe.
                                                                                // LCS = Longest Common Subsequence  ans SCS = Sortest Common Supersequence
    return 0;
}

/*
peek
eke
Longest Common Subsequence is : 2
Sortest Common Supersequence is : 5

ckkgcd
kxgxcyd
Longest Common Subsequence is : 4  
Sortest Common Supersequence is : 9
*/