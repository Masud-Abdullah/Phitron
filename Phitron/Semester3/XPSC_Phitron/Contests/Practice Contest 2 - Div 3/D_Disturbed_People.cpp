#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll k = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i - 1] == 1 && a[i] == 0 & a[i + 1] == 1)
        {
            k++;
            a[i + 1] = 0;
        }
    }
    cout << k << '\n';
    return 0;
}