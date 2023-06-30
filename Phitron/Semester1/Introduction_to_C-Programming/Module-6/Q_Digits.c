//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i=1;i<=t;i++)
    {
        int n;
        scanf("%d", &n);

        do{
            printf("%d ",n%10);
            n = n/10;
        }while (n!=0);

        printf("\n"); 
   
    }

    return 0;
}










// #include<stdio.h>
// int main()
// {
//      int t;
//      scanf("%d",&t);
//      while(t--)
//      {
//         int n;
//         scanf("%d",&n);

//         if(n==0)printf("0\n");
//         else
//         {
//             while(n || n>0)
//         {
//             int var=n%10;
//             printf("%d ",var);
//             n/=10;
//         }
//         printf("\n");
//         }
//      }
//     return 0;
// }