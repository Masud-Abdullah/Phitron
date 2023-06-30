#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    int total_element = row * col; // sutro

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int cnt = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
                cnt++;
        }
    }

    if (cnt == total_element)
        printf("ZERO MATRIX\n");
    else
        printf("N0T ZERO MATRIX\n");

    return 0;
}



/*
Another method:

#include <stdio.h>
int main()
{
    int row, col,f=1;
    scanf("%d %d", &row, &col);
    int a[row][col];
    int total_element = row * col; // sutro

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j] != 0) f=0;
        }
    }

    if (f)
        printf("ZERO MATRIX\n");
    else
        printf("N0T ZERO MATRIX\n");

    return 0;
}
*/