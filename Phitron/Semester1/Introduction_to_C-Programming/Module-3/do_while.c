#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    i = 1;

do
{
   printf("%d\n", i);
        i++;
} while (i<=n);

    // while(i<=n){
    //     printf("%d\n", i);
    //     i++;
    // }

    return 0;
}