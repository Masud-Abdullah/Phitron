#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
int main()
{
     int t;
     scanf("%d",&t);
     for(int k=1;k<=t;k++)
     {
        int n,s,f=0;
        scanf("%d",&n);
        int a[n+1];
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);

        scanf("%d",&s);

        for(int i=1;i<=n;i++)
        {
            if(a[i]==s)
            {
                f=1;
                s=i;
                break;
            }
        }
        if(f==0)printf("Case %d: Not Found\n",k);
        else printf("Case %d: %d\n",k,s);
     }
    return 0;
}