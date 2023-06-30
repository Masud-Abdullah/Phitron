#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
int main()
{
     int a,b,c;
     scanf("%d%d%d",&a,&b,&c);

     if(a>0 && b>0 && c>0 && a==b && b==c)printf("Yes\n");
     else printf("No\n");
    return 0;
}