#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ev = 0, od = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                ev++;
            else
                od++;
        }

        if (n % 2 != 0)
            cout << -1 << endl;
        // else if (ev == od)
        //     cout << 0 << endl;
        else
        {
            cout << (max(ev, od) - (n / 2)) << endl;
        }

        // othoba else a
        // cout << (n/2)-min(ev,od) << endl;  //dileo hobe.
    }
    return 0;
}