#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a[n],h=INT_MIN;
     for(int i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
        if(a[i]>h)h=a[i];
     }

     for(int i=0;i<n;i++)
     {
        printf("%d ",h-a[i]);
     }
     printf("\n");
    return 0;
}