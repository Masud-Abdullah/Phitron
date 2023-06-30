#include<stdio.h>
void  swap_it(int *a,int *b)
{
    int tm=*a;
    *a=*b;
    *b=tm;
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
     swap_it(&x,&y);
     printf("%d %d\n",x,y);
    return 0;
}