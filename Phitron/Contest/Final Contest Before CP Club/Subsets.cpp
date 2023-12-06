// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e9 + 7;
// typedef long long int ll;
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, dif;
//         cin >> n >> dif;
//         ll a[n + 1], sum = 0, count = 0;
//         for (ll i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//             sum += a[i];
//         }

//         bool dp[n + 1][sum + 1];
//         dp[0][0] = true;
//         for (int i = 1; i <= sum; i++)
//             dp[0][i] = false;

//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 0; j <= sum; j++)
//             {
//                 if (a[i] <= j)
//                 {
//                     dp[i][j] = dp[i - 1][j - a[i]] || dp[i - 1][j];
//                 }
//                 else
//                     dp[i][j] = dp[i - 1][j];
//             }
//         }
//         for (int i = 0; i <= n; i++)
//         {
//             for (int j = 0; j <= sum; j++)
//             {
//                 if(dp[i][j]==1) cout << j << " ";
//                 else cout << dp[i][j] << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;

//         for (int i = 0; i <= n; i++)
//         {
//             for (int j = 0; j <= sum; j++)
//             {
//                 if (dp[i][j] == 1)
//                 {
//                     int s1 = j;
//                     int s2 = sum - j;
//                     if (abs(s1 - s2) == dif)
//                     {
//                         count++;
//                         // cout<<s1<<" "<<s2<<endl;
//                         // cout<<<<" "<<s2<<endl;
//                     }
//                 }
//             }
//         }

//         // cout << count%N << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;

// const int N = 1e9 + 7;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n,d;
//         cin >> n>>d;

//         ll a[n + 1];
//         ll sum = 0;

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             sum += a[i];
//         }

//         d = (sum + d) / 2;

//         ll dp[n + 1][d + 1];

//         dp[0][0] = 1;

//         for (int i = 1; i <= d; i++)
//         {
//             dp[0][i] = 0;
//         }

//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 0; j <= d; j++)
//             {
//                 if (a[i - 1] <= j)
//                 {
//                     dp[i][j] = (dp[i - 1][j - a[i - 1]] + dp[i - 1][j]) % N;
//                 }
//                 else
//                     dp[i][j] = (dp[i - 1][j]) % N;
//             }
//         }

//         cout << dp[n][d] << endl;

//         // for(ll i=0;i<=n;i++)
//         // {
//         //     for(ll j=0;j<=sum;j++)
//         //     {
//         //         cout<<dp[i][j]<<" ";
//         //     }
//         //     cout<<endl;
//         // }
//         // cout<<endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int dp[1005][1005];
const int N = 1e9+7;
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
        bool op1 = subset_sum(n - 1, a, s - a[n]);
        bool op2 = subset_sum(n - 1, a, s);
        return dp[n][s] = op1 || op2;
    }
    else
        return dp[n][s] = subset_sum(n - 1, a, s);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,d;
        cin >> n>>d;
        int a[n + 1];
        ll sm=0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sm+=a[i];
        }
      

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= sm; j++)
            {
                dp[i][j] = -1;
            }
        }

        if (subset_sum(n, a, sm))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}