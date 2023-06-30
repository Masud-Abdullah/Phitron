#include <stdio.h>
int main()
{
    int row, col,flag=1;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)  //Asif Abdullah
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
            if(i+j != row-1 && a[i][j] !=0) flag = 0;  // col-1 dileo hobe karon row col er size same
        }
    }

  
    if (row != col) flag = 0; // checking that is it a square matrix!!!
    

    if (flag) printf("Secondary Diagonal\n");
    else printf("Not Secondary Diagonal\n");

    return 0;
}
/*
//Phitron's Code:

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
            if(i+j==row-1) continue; // col-1 dileo hobe karon row col er size same
            if(a[i][j] != 0) flag = 0;
        }

    }

    if(flag==1) printf("Seconday Diagonal\n");
    else printf("Not Diagonal\n");


    return 0;
}
*/