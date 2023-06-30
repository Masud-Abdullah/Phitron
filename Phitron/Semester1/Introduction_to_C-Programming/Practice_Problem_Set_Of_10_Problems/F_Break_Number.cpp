#include <bits/stdc++.h>
using namespace std;
long long call(long long a)
{
    long long cnt = 0;
    while (a % 2 == 0)
    {
        a /= 2;
        cnt++;
    }
    return cnt;
}
int main()
{
    long long n;
    cin >> n;
    long long a, mx = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        mx = max(mx, call(a));
    }
    cout << mx << endl;
    
    return 0;
}