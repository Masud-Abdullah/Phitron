//Using Recursion
#include<stdio.h>
void print_digits(int n)
{
    if(n==0)return;
    int x=n%10;
    print_digits(n/10);
    printf("%d ",x);
}
int main()
{
     int t;
     scanf("%d",&t);
     while(t--)
     {
        int n;
        scanf("%d",&n);
        print_digits(n);
        if(n==0)
        {
            printf("0");
        }
        printf("\n");
     }
    return 0;
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//      int t;
//      scanf("%d",&t);
//      while(t--)
//      {
//         char st[100];
//         scanf("%s",st);
//         for(int i=0;i<strlen(st);i++)
//         {
//             printf("%c ",st[i]);
//         }
//         printf("\n");
//      }
//     return 0;
// }