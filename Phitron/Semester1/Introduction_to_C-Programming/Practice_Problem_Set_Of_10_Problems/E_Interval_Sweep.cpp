#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > 0 && b > 0 && (a == b || a == b + 1 || a + 1 == b))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
        
    return 0;
}