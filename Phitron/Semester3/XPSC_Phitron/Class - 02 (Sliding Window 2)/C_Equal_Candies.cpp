#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, f = 0;
        cin >> n;
        long long a[n], i, sum = 0;
        for (i = 0; i < n; i++)
            cin >> a[i];

        for (i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                f = 1;
                break;
            }
        }

        sort(a, a + n);

        int eat = a[0];

        for (i = 0; i < n; i++)
        {
            if (a[i] != eat)
            {
                sum = sum + (a[i] - eat);
            }
            else
                continue;
        }

        if (f == 0)
            cout << f << endl;
        else if (n == 1)
            cout << n - 1 << endl;
        else
        {
            cout << sum << endl;
        }
    }

    return 0;
}