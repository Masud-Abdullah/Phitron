//For n=5;
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5


//____________________________Phitron er Rule________________________________________
#include<stdio.h>
int main()
{
     int n,k=1;
     scanf("%d",&n);

     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=k;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        k++;
     }
    return 0;
}
//____________________________Amar nijer system________________________________________
// #include<stdio.h>
// int main()
// {
//      int n;
//      scanf("%d",&n);

//      for(int i=1;i<=n;i++)
//      {
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//      }
//     return 0;
// }