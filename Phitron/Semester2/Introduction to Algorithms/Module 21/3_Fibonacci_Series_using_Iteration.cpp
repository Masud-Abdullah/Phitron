#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long int;
int main()
{
    ull n;
    cin >> n;
    ull save[n + 1];
    save[0] = 1;
    save[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        save[i] = save[i - 1] + save[i - 2];
    }
    cout<<save[n]<<endl;
    return 0;
}