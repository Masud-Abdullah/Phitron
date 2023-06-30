#include <stdio.h>
int main()
{
    int row, col,flag=1;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)   //Asif Abdullah
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
            if(i != j && a[i][j] !=0) flag = 0; 
        }
    }

  
    if (row != col) flag = 0; // checking that is it a square matrix!!!
    

    if (flag)
        printf("Primary Diagonal\n");
    else
        printf("Not Primary Diagonal\n");

    return 0;
}

/*Phitron's Code:

#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int flag=1;
    if(row != col) flag = 0; // checking that is it a square matrix!!!

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i==j) continue;
            if(a[i][j] != 0) flag = 0;
        }

    }

    if(flag==1) printf("Primary Diagonal\n");
    else printf("Not Diagonal\n");


    return 0;
}

*/