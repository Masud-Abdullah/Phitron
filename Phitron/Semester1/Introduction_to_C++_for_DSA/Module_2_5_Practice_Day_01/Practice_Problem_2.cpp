#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int *a = new int[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;
    int b[m];
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    delete[] a;

    for (int j = i; j < m; j++)
    {
        cin >> b[j];
    }

    for (i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}