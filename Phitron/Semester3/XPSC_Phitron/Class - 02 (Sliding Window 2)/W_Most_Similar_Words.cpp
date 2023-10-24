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
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int mn = INT_MAX, cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                cnt = 0;
                for (int k = 0; k < m; k++)
                {
                    cnt += abs((s[i][k] - 'a') - (s[j][k] - 'a'));
                }
                mn = min(mn, cnt);
                // cout<<mn<<'\n';
            }
        }
        cout << mn << '\n';
        // cout<<'\n';
    }
    return 0;
}