#include <stdio.h>
void fun(int i) // Using Recursion
{
    if (i == 0) // Base Case
        return;
    if (i == 1)
    {
        printf("%d", i);
    }
    else
    {
        printf("%d ", i); // Normal Way
    }
    fun(i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(n);
    return 0;
}

// #include<stdio.h>
// void fun(int i,int n)
// {
//     if(i==n+1)return;   //Base Case
//     fun(i+1,n);     //Reverse Way
//     if(i==1)
//     {
//         printf("%d",i);
//     }
//     else
//     {
//         printf("%d ",i);
//     }
// }
// int main()
// {
//      int n;
//      scanf("%d",&n);
//      fun(1,n);
//     return 0;
// }
