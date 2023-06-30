#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j]) 
            {
                int tm = a[i];
                a[i] = a[j];
                a[j] = tm;
            }
        }
    }
    int mn=a[0],cnt=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]==mn)cnt++;
    }

    if(cnt%2!=0)printf("Lucky\n");
    else printf("Unlucky\n");
    return 0;
}