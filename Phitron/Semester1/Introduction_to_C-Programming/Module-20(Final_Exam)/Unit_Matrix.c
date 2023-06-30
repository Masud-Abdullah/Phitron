#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a[n][n],f=1;
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }

     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            if(i==j && a[i][j]!=1)
            {
                f=0;
            }

            if(i!=j && a[i][j]!=0)
            {
                f=0;
            }
        }
     }

     if(f)printf("YES\n");
     else printf("NO\n");
    return 0;
}