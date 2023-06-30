#include<stdio.h>
void fun(int i,int n)
{
    if(i==n+1)return;   //Base Case
    printf("%d\n",i);
    fun(i+1,n);     //Normal Way
}
int main()
{
     int n;
     scanf("%d",&n);
     fun(1,n);
    return 0;
}

// #include <stdio.h>
// void fun(int i)
// {
//     if (i == 0)  //Base Case
//         return;
//     fun(i - 1);
//     printf("%d\n", i);  //Reverse Way
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     fun(n);
//     return 0;
// }