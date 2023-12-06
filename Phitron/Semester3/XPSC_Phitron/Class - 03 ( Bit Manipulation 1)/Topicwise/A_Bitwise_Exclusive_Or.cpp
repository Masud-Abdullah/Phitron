#include <bits/stdc++.h>
using namespace std;
//trick: a^b=c hole a^c=b and b^c=a hobe.
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = (a ^ b);
    cout << ans << '\n';
    return 0;
}