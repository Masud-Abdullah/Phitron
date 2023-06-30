#include <stdio.h>
int main()
{
    int x, p;
    scanf("%d%d", &x, &p);
    float ans = ((p * 1.0) / (100 - (x * 1.0))) * 100;
    printf("%0.2f\n", ans);
    return 0;
}