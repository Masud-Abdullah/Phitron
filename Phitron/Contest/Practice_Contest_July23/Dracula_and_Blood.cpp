#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s; // Code idea+explained by asif abdullah ibne saiful
        vector<int> v;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                cnt++;
            else
            {
                v.push_back(cnt);
                cnt = 0;
            }
        }
        v.push_back(cnt);

        sort(v.begin(), v.end(), greater<int>());

        long long int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (i % 2 == 0)
                ans += v[i];
        }

        cout << ans << endl;
    }
    return 0;
}