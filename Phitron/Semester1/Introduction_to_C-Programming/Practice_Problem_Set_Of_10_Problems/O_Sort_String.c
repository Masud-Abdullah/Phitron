#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[26] = {0};
    char x;
    // for(int i=0;i<n;i++)
    // {
    //     cin>>x;
    //     a[x-97]++;
    // }
    while (scanf("%c", &x) != EOF)
    {
        a[x - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i] > 0)
            {
                printf("%c", i + 97);
            }
        }
    }
    printf("\n");
    
    return 0;
}