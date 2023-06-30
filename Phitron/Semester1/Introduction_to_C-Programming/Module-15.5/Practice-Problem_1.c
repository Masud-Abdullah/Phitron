#include <stdio.h>
void my_abs(int x)
{
    if (x < 0)
        x *= -1;
    printf("%d\n", x);
}
int main()
{
    int n;
    scanf("%d", &n);
    my_abs(n);
    return 0;
}