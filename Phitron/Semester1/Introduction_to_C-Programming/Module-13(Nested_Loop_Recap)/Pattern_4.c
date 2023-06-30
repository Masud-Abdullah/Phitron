// Ei Pattern a amra always (2*n)-1 lines pabo.
// For n=5;
//      *        n==1
//     ***       n==2
//    *****      n==3
//   *******     n==4
//  *********    n==5
//   *******     n==6
//    *****      n==7
//     ***       n==8
//      *        n==9

//____________________________Phitron er Rule____________________________________
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1, k = 1;

    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        // line stars here
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        // line ends here

        if (i <= n - 1)
        {
            s--;
            k += 2;
        }
        else
        {
            s++;
            k -= 2;
        }

        printf("\n");
    }

    return 0;
}

//___________________________Amar Nijer Code_____________________________________
// #include<stdio.h>
// int main()
// {
//      int n;
//      scanf("%d",&n);
//      int s=n-1,k=1;

//      for(int i=1;i<=n;i++)
//      {
//         for(int j=1;j<=s;j++)
//         {
//             printf(" ");
//         }
//          for(int j=1;j<=k;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         s--;
//         k+=2;
//      }

//      s=1;
//      k=(2*n)-3;
//      for(int i=1;i<=n-1;i++)
//      {
//         for(int j=1;j<=s;j++)
//         {
//             printf(" ");
//         }
//          for(int j=1;j<=k;j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//         s++;
//         k-=2;
//      }
//     return 0;
// }

