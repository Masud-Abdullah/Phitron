#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0, ans = 0, x;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a + 1, a + n + 1);

    x = a[1];
    for (int i = 1; i <= n; i++)
    {
        if (x == a[i])
            cnt++;

        if (x != a[i])
        {
            if (x + 1 == a[i])
            {
                ans += cnt;
            }
            cnt = 0;
            x = a[i];
            cnt++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}