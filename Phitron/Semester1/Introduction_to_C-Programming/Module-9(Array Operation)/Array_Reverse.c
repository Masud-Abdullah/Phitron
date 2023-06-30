#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a[n];
     for(int i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
     int i=0,j=n-1,tm;
     //Two Pointer........
     while (i<j)
     {
        tm=a[i];
        a[i]=a[j];
        a[j]=tm;
        i++;
        j--;
     }

     for(i=0;i<n;i++)
     {
        printf("%d ",a[i]);
     }
     printf("\n");
     
    return 0;
}