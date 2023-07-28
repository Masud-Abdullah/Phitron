#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        int mx = INT_MIN, cnt = INT_MIN;
        while (n--)
        {
            int x;
            cin >> x;
            mp[x]++;
            if (mp[x] > mx)
            {
                mx = mp[x];
                cnt = x;
            }
            else if (mp[x] == mx)
            {
                if (x > cnt)
                {
                    cnt = x;
                }
            }
        }

        cout << cnt << " " << mx << endl;
    }
    return 0;
}