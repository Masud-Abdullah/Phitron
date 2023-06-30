//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F

#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);

     for(int i=1;i<=12;i++)
     {
        int mul=i*n;
        printf("%d * %d = %d\n",n,i,mul);
     }
    return 0;
}