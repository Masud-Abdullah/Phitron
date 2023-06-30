#include<stdio.h>
void fun(int x)
{
    x=200;
    printf("fun function er x er address-%p\n",&x);
    printf("fun function er x er value-%d\n",x);
}
int main()
{
     int x=10;
     printf("fun function er x er address-%p\n",&x);
     printf("main function er x er value-%d\n",x);
     fun(x);

    return 0;
}