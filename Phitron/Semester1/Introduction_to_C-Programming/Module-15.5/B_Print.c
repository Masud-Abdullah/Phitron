#include <stdio.h>
void solve(int x)
{
    for (int i = 1; i < x; i++)
    {
        printf("%d ", i);
    }
    printf("%d\n",x);
}
int main()
{
    int n;
    scanf("%d", &n);
    solve(n);
    return 0;
}