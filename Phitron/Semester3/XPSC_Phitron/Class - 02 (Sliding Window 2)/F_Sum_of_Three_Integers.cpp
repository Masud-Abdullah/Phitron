#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int k, s, cnt = 0;
    cin >> k >> s;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (s - (i + j) <= k && s - (i + j) >= 0) cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}
