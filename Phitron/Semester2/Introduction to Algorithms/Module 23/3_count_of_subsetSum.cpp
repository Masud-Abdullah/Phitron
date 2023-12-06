//Top Down Approach

// #include <bits/stdc++.h>
// using namespace std;
// int dp[1005][1005];
// int subset_sum(int n, int a[], int s)
// {
//     if (n == 0)
//     {
//         if (s == 0)
//             return 1;
//         else
//             return 0;
//     }

//     if (dp[n][s] != -1)
//         dp[n][s];

//     if (a[n] <= s)
//     {
//         int op1 = subset_sum(n - 1, a, s - a[n]); // nibo //
//         int op2 = subset_sum(n - 1, a, s);        // nibo na //
//         return dp[n][s] = op1 + op2;              // jekono ekta true hoilei true return kore, shob false hoilei false return kore //
//     }
//     else
//         return dp[n][s] = subset_sum(n - 1, a, s);
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n + 1];
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }
//     int s;
//     cin >> s;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= s; j++)
//         {
//             dp[i][j] = -1;
//         }
//     }

//     cout<<subset_sum(n,a,s)<<endl;
//     return 0;
// }

//Bottom Top Approach

#include <bits/stdc++.h>
using namespace std;
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

    int dp[n + 1][s + 1];
    dp[0][0] = 1;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (a[i] <= j)
            {
                // bool op1 = dp[i - 1][j - a[i]];
                // bool op2 = dp[i - 1][j];
                // dp[i][j] = op1||op2;

                // dp state
                dp[i][j] = dp[i - 1][j - a[i]] + dp[i - 1][j];
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout<<dp[n][s]<<endl;

    // cout << "Printing dp array" << endl;
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= s; j++)
    //     {
    //         if(dp[i][j])cout<<"1 ";
    //         else cout<<"0 ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}