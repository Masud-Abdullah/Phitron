
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;   //Sayem Er Code
    cin>>n;
    int a[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j && i==n/2) cout<<"X";
            else if(i==j) cout<<"\\";
            else if(i+j == n-1) cout<<"/";
            else cout<<"*";
        }
        printf("\n");
    }
    
    return 0;
}
//Amar Code n er man even+odd duitar jonnoi hobe
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int a = 0, b = 1, c = n - 2, d = 1, e = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % 2 != 0 && i == (n / 2) + 1)
//         {
//             for (int j = 1; j <= n / 2; j++)
//                 cout << '*';

//             cout << "X";
//             for (int j = 1; j <= n / 2; j++)
//                 cout << '*';

//                 cout<<endl;

//                 a--;
//                 c=1;
//                 e--;
//             continue;
//         }
//         for (int k = 1; k <= a; k++)
//         {
//             cout << '*';
//         }
//         for (int k = 1; k <= b; k++)
//         {
//             if (i <= n / 2)
//                 cout << '\\';
//             else if ((n % 2 == 0 && i >= n / 2) || (n % 2 != 0 && i >= (n / 2) + 1))
//             {
//                 cout << '/';
//             }
//         }
//         for (int k = 1; k <= c; k++)
//         {
//             cout << '*';
//         }
//         for (int k = 1; k <= d; k++)
//         {
//             if (i <= n / 2)
//                 cout << '/';
//             else if ((n % 2 == 0 && i >= n / 2) || (n % 2 != 0 && i >= (n / 2) + 1))
//             {
//                 cout << '\\';
//             }
//         }
//         for (int k = 1; k <= e; k++)
//         {
//             cout << '*';
//         }
//             if ((n%2!=0 && (i <= n / 2))||(n%2==0 && i<n/2))
//             {
//                 a++;
//                 c -= 2;
//                 e++;
//             }
//             else if(i>n/2)
//             {
//                 a--;
//                 c+=2;
//                 e--;
//             }
//             cout<<endl;
//     }

//     return 0;
// }