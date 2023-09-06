#include <bits/stdc++.h>
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long int c;
        cin >> c;
        vector<long long int> ans;
        sort(a, a + n);

        for (int i = 0; i < n - 1; i++)
        {
            ans.push_back(abs(a[i] - a[i + 1]));
        }
        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());
        
        if (ans.size() < c)
            cout << 0 << endl;
        else
            cout << ans[c - 1] << endl;
    }
    return 0;
}
