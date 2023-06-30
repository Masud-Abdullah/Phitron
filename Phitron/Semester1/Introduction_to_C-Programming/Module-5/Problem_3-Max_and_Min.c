//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include<stdio.h>
int main()
{
     int a,b,c;
     scanf("%d %d %d",&a,&b,&c);
     int min=0,max=0;

     //find minimun
     if(a<b && a<c)
     {
        min=a;
     }
     else if(b<c)
     {
        min=b;
     }
     else
     {
        min=c;
     }

     //find maximun
     if(a>b && a>c)
     {
        max=a;
     }
     else if(b>c)
     {
        max=b;
     }
     else
     {
        max=c;
     }

     printf("%d %d\n",min,max);
    return 0;
}
