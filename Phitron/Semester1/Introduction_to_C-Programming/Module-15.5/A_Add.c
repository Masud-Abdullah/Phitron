#include <stdio.h>
long long add(int a, int b)
{
    long long sum = a + b;
    return sum;
}
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    long long ans = add(x, y);
    printf("%lld\n", ans);

    return 0;
}
//Ager code
// #include<stdio.h>
// void summation(int x,int y)
// {
//     int ans=x+y;
//     printf("%d\n",ans);
// }

// int main()
// {
//     int x,y;
//     scanf("%d%d",&x,&y);
//     summation(x,y);
//     return 0;
// }
