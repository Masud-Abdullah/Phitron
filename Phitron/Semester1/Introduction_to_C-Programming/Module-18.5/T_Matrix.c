#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int primary_diagonal = 0, secondary_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j)
            {
                primary_diagonal+=a[i][j];
            }

            if(i+j==n-1)
            {
                secondary_diagonal+=a[i][j];
            }
        }
    }

    int ans=abs(primary_diagonal-secondary_diagonal);
    printf("%d\n",ans);

    return 0;
}

// 0,3
// 1,2  i+j will be always row-1;
// 2,1
// 3,0