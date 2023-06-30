#include<stdio.h>
void  change_it(int *a,int n)
{
    *(a+n-1)=100;
  // a[n-1]=100;  //etao kora jay.
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
     int n;
     scanf("%d",&n);
     int a[n+1];
     for(int i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
      change_it(&a[0],n);
    return 0;
}