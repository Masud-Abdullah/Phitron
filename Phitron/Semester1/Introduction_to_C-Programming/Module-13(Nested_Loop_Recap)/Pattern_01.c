// * 
// * *
// * * *
// * * * *
// * * * * *


#include <stdio.h>
int main()
{
    int n, k = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            printf("* ");
        }
        printf("\n");
        k++;
    }

    return 0;
}
//Another way and I think this is easy.
// #include<stdio.h>
// int main()
// {
//      int n;
//      scanf("%d",&n);

//      for(int i=1;i<=n;i++)
//      {
//         for(int j=1;j<=i;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//      }

//     return 0;
// }