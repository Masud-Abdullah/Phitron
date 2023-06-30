#include <stdio.h>
int main()
{
    int row, col, i, j;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // For printing exact row:
    printf("\nFor printing exact row:\n");

    int exact_row;
    scanf("%d", &exact_row); // Exact koto tomo row er value dekhte chai sheta input neyar jonno

    for (int j = 0; j < col; j++)
    {
        printf("%d ", a[exact_row][j]); //fixed row
    }

    printf("\n\nFor printing exact column:\n");

    int exact_col; // Exact koto tomo column er value dekhte chai sheta input neyar jonno 
    scanf("%d", &exact_col);

    for (int i = 0; i < row; i++)
    {
        printf("%d\n",a[i][exact_col]); //fixed column
    }
    
    return 0;
}