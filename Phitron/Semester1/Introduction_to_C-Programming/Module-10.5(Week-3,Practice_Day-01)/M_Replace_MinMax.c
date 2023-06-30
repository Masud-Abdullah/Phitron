//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
#include<stdio.h>
#include<limits.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a[n];
     int max_val=INT_MIN,max_indx;
     int min_val=INT_MAX,min_indx;

     for(int i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
        if(a[i]>max_val)
        {
            max_val=a[i];
            max_indx=i;
        }

        if(a[i]<min_val)
        {
            min_val=a[i];
            min_indx=i;
        }
     }
     
    //  int tm;
    //  tm=a[min_indx];
    //  a[min_indx]=a[max_indx];
    //  a[max_indx]=tm;

     a[max_indx]=min_val;
     a[min_indx]=max_val;

     for(int i=0;i<n;i++)
     {
        printf("%d ",a[i]);
     }
     printf("\n");

    return 0;
}

//Amar Ager Code
// #include<stdio.h>
// int main()
// {

//     int n,i;
//     scanf("%d",&n);
//     int a[n];

//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }

//     int max=a[0],max_indx;
//     for(i=1;i<n;i++)
//     {
//         if(a[i]>max)
//         {
//              max=a[i];
//              max_indx=i;
//         }

//     }

//     int min=a[0],min_indx;
//     for(i=1;i<n;i++)
//     {
//         if(a[i]<min)
//         {
//             min=a[i];
//             min_indx=i;
//         }
//     }

//     a[max_indx]=min;
//     a[min_indx]=max;

//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }

//     return 0;
// }