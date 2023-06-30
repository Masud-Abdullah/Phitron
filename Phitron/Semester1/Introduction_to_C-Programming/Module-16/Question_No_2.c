//Question: Write a C program to take positive integer N as input and print
// a pattern shown in the sample input output.

//     1
//    22
//   333
//  4444
// 55555
#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);

     int s=n-1;
     int k=1;
     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("%d",k);
        }
        printf("\n");
        k++;
        s--;
     }
    return 0;
}