#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << '\n';
            continue;
        }

        if (abs(l - r) < x)
        {
            cout << -1 << '\n';
            continue;
        }

        if (abs(a - b) >= x)
        {
            cout << 1 << '\n';
            continue;
        }

        if ((r - b >= x && abs(a - r) >= x) || (b - l >= x && abs(a - l) >= x))
        {
            cout << 2 << '\n';
            continue;
        }

        if (((abs(a - l) < x && (abs(a - r) >= x && abs(r - b) < x) && abs(l - b) >= x)) || ((abs(a - r) < x && (abs(a - l) >= x && abs(l - b < x) && abs(r - b) >= x))))
        {
            cout << 3 << '\n';
            continue;
        }
        cout << -1 << '\n';
    }
    return 0;
}