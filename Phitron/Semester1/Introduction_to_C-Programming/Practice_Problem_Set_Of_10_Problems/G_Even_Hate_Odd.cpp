#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, e = 0, o = 0;
        cin >> n;
        int a[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                e++;
            else if (a[i] % 2 != 0)
                o++;
        }


        // cout<<e<<" "<<o<<endl;

        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
            cout << max(e, o) - (n / 2) << endl;

    }

    
    return 0;
}