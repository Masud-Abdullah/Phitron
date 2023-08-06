#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int c[n + m], x = 0, y = 0;
    for (int i = 0; i < n + m; i++)
    {
        if (x < n && y < m)
        {
            if (a[x] >= b[y])
            {
                c[i] = a[x];
                x++;
            }
            else if (a[x] < b[y])
            {
                c[i] = b[y];
                y++;
            }
        }
        else if (x < n)
        {
            c[i] = a[x];
            x++;
        }
        else
        {
            c[i] = b[y];
            y++;
        }
    }

    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }
    cout << '\n';
    
    return 0;
}