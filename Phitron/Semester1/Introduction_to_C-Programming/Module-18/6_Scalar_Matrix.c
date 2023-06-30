#include<stdio.h>
int main()
{
     int row,col;
     scanf("%d%d",&row,&col);
     int a[row][col];

     for(int i=0;i<row;i++)
     {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
     }

     int flag=1;
     if(row!=col)
     {
        flag=0;
     }

     for(int i=0;i<row;i++)
     {
        for(int j=0;j<col;j++)
        {
            if(i==j && a[i][j]!=a[0][0])
            {
                flag=0;
            }
            else if(i!=j && a[i][j]!=0)
            {
                flag=0;
            }
        }
     }

     if(flag==1)
     {
        printf("Scalar Matrix\n");
     }
     else 
     {
        printf("Not Scalar Matrix\n");
     }
    return 0;
}


/*
#include <stdio.h>
int main()
{
    int row, col,flag=1;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
            if(i == j && a[i][j] !=a[0][0]) flag = 0; 
            if(i != j && a[i][j] !=0) flag = 0; 
        }
    }
  
    if (row != col) flag = 0; // checking that is it a square matrix!!!
    
    if (flag)
        printf("Scalar Matrix\n");
    else
        printf("Not Scalar Matrix\n");
    return 0;
}
*/