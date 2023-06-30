#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    int b[100000]={0};//Ekhane array length a variable use korle value initialize kora jabe na. tai 'b' array er length 'm' na diye m er max valu 10^5 diye rakhsi.
   /* for(int i=1;i<=m;i++)
    {
        b[i]=0;
    }*/

    for(int i=1;i<=n;i++)
    {
        b[a[i]]++;
    }

    for(int i=1;i<=m;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}