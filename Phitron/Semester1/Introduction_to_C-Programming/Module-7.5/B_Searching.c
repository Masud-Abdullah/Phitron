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

     int x,indx=-1;
     scanf("%d",&x);

     for(int i=0;i<n;i++)
     {
        if(a[i]==x)
        {
            indx=i;
            break;
        }
     }

     printf("%d\n",indx);
    return 0;
}