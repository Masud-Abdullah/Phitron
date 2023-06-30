// No return type + Np parameter
#include <stdio.h>
void sum()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int ans = a + b;
    printf("%d\n", ans);
}
int main()
{
    sum();
    sum();
    sum();
    // If I want then i can call any function several time.
    return 0;
}