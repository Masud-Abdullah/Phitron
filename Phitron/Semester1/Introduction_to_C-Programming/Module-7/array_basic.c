// Array initialization

#include<stdio.h>
int main()
{
    int a1[]={10,20,30,40,50}; // int a1[5]={10,20,30,40,50}; 2 tai same

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",a1[i]);
    }

    printf("\n--------------\n");
    
    int a2[5]={10};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",a2[i]);
    }
      printf("\n--------------\n");
    
    int a3[5]={0};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",a3[i]);
    }
    
    
    return 0;
}

//Array input output

// #include<stdio.h>
// int main()
// {
//     int ar[5];
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &ar[i]);
//     }

//      for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n", ar[i]);
//     }
    
    
//     return 0;
// }