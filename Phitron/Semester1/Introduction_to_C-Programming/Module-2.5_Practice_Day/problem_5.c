#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>=10000)
    {
        if(x>20000)printf("Gucci Bag\nGucci Belt\n");
        else printf("Gucci Bag\n");
    }
    else if(x>=5000)
    {
        printf(" Levis Bag\n");
    }
    else printf("Something\n");
    return 0;
}