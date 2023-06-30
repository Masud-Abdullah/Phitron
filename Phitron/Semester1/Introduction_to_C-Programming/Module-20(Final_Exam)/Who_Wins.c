#include<stdio.h>
int main()
{
     int n;
     scanf("%d",&n);
     int x,y,T=0,P=0;
     for(int i=1;i<=n;i++)
     {
        scanf("%d%d",&x,&y);
        if(x>y)T++;
        else if(x<y)P++;
     }

     if(T>P)printf("Tiger\n");
     else if(T<P)printf("Pathan\n");
     else printf("Draw\n");
    return 0;
}