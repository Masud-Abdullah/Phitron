// Pathan Vaier System
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
typedef unsigned long long int ull;
ull save[N];
ull fibo(ull n)
{
    if (n == 0 || n == 1)
        return 1;
    if (save[n] != 0)
    {
        return save[n];
    }
    ull ans1 = fibo(n - 1);
    ull ans2 = fibo(n - 2);
    save[n] = ans1 + ans2;
    return ans1 + ans2;
    // return save[n];
}
int main()
{
    ull n;
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}
// Amar Nijer Kora

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 5;
// long long int save[N];
// long long int fibo(int n)
// {
//     // save[0] = 1;
//     // save[1] = 1;
//     //Note: 0,1 er value alada vabe set kora lagbe na egulo base case theke return hobe.
//     if (n == 0 || n == 1)
//         return 1;

//     long long int ans1, ans2;
//     if (save[n - 1] == 0)
//     {
//         ans1 = fibo(n - 1);
//     }
//     else
//     {
//         ans1 = save[n - 1];
//     }

//     if (save[n - 2] == 0)
//     {
//         ans2 = fibo(n - 2);
//     }
//     else
//     {
//         ans2 = save[n - 2];
//     }

//     save[n] = ans1 + ans2;
//     return ans1 + ans2;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << fibo(n) << endl;
//     return 0;
// }