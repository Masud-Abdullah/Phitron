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
                dp[i][j] = 0; // Jokhoniy milbe na tokhoniy 0 hobe and notun kore count shuru hobe
            }
        }
    }

    // Printing dp array

    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= m; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int mx = 0;
    int ci, cj;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (dp[i][j] > mx)
            {
                mx = dp[i][j];
                ci = i;
                cj = j;
            }
        }
    }

    string ans;
    while (ci != 0 && cj != 0) // jei cell a ans paisi oi cell thekei shuru korsi. tai jekhanei milbe na shekhanei break kore dibo.
    {
        if (a[ci - 1] == b[cj - 1])
        {
            ans += a[ci - 1];
            ci--;
            cj--;
        }
        else
            break; // mile nai tai break. mane longest substring peye gesi.
    }
    cout << "Maximum Length of Substring " << mx << endl;
    cout << ci << "th row and " << cj << "th column" << endl;
    reverse(ans.begin(), ans.end());
    cout << "The Longest common substring is : " << ans << endl;

    return 0;
}

/*

abcdfgr
acfdgr
Maximum Length of Substring 2
5th row and 4th column
The Longest common substring is : gr

aceghr
acaeghbr
Maximum Length of Substring 3
2th row and 3th column
The Longest common substring is : egh

*/