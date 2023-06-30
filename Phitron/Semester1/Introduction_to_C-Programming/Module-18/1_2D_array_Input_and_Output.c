#include<stdio.h>
int main()
{
    //declare 2d array
    int a[5][3];            // syntax: a[row][col]
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    
    
    return 0;
}



/*
#include<stdio.h>
int main()
{
    //declare 2d array
    int a[5][3];            // syntax: a[row][col]
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("a[%d][%d] = %d | ",i,j,a[i][j]);
        }
        printf("\n");
        
    }
    

    
    
    return 0;
}

*/