#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // unsigned long long x, y;
        // cin >> x >> y;
        // unsigned long long ans = x * y;
        // // cout<<ans<<endl;
        // string st = to_string(ans);
        // if (st[st.size() - 2] == '0' && st[st.size() - 1] == '0')
        // {
        //     cout << 0 << endl;
        //     continue;
        // }

        // cout << st[st.size() - 2] << st[st.size() - 1] << endl;

        long long int a, b;
        cin >> a >> b;
        a %= 100;
        b %= 100;

        long long int ans = a * b;
        ans %= 100;
        cout << ans << endl;
    }
    return 0;
}