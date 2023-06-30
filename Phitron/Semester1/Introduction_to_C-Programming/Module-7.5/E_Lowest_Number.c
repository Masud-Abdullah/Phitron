#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], min = 1e9, indx = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            indx = i + 1;
        }
    }

    printf("%d %d\n", min, indx);
    return 0;
}