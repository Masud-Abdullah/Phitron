//Given two strings X and Y . Print the smallest lexicographical one.
#include<stdio.h>
int main()
{
     char x[25],y[25];
     scanf("%s %s",x,y);

     int i=0;
     while(1)
     {
        if(x[i]=='\0' && y[i]=='\0')
        {
            printf("%s\n",x);
            break;
        }
        else if(x[i]=='\0')
        {
            printf("%s\n",x);
            break;
        }
        else if(y[i]=='\0')
        {
            printf("%s\n",y);
            break;
        }

        if(x[i]==y[i])
        {
            i++;
        }
        else if(x[i]<y[i])
        {
            printf("%s\n",x);
            break;
        }
        else if(x[i]>y[i])
        {
            printf("%s\n",y);
            break;
        }
     }
    return 0;
}

//Ager Code
// #include<stdio.h>
// int main()
// {
//     char x[101],y[101];
//     scanf("%s%s",&x,&y);
//     int i=0;

//     while(x[i]==y[i])
//     {
//         i++;
//     }
//     if(x[i]=='\0')
//     {
//         printf("%s",x);
//     }
//     else if(y[i]=='\0')
//     {
//         printf("%s",y);
//     }
//     else if(x[i]<y[i])
//     {
//         printf("%s",x);
//     }
//     else
//     {
//         printf("%s",y);
//     }


//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char x[1001],y[1001];
//     scanf("%s%s",&x,&y);

//     int z=strcmp(x,y);

//     if(z<0)
//     {
//         printf("%s",x);
//     }
//     else if(z>0)
//     {
//         printf("%s",y);
//     }
//     else
//     {
//         printf("%s",x);
//     }

//     return 0;
// }
