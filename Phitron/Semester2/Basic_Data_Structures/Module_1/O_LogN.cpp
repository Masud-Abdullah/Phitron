#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) /// O(n) complexity
    {
        cout << i << endl;
    }

    for (int i = 1; i <= n; i *= 2) // O(logN)complexity
    {
        cout << i << endl;
    }
    return 0;
}
//Phitron's Code
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         int x=i;
//         while(x>0)
//         {
//             int digit=x%10;
//             cout<<digit<<" ";
//             x/=10;
//         }
//         cout<<endl;
//     }
//     return 0;
// }