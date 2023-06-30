#include <bits/stdc++.h>
using namespace std;
int main()
{
    int *a = new int[5]; // Syntax Of Dynamic Array declaration. Eta baad e baki shob normal aray er motoi same vabe kaj kore //
                         //  karon normal array o pointer hisebe kaj kre
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}