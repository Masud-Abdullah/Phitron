#include <stdio.h>
#include <limits.h>
void max_min(int *a ,int n)  //   max_min(int a[] ,int n)----evabeo kora jabe
{
    int mx=INT_MIN;
    int mn=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(a[i]>mx)mx=a[i];  //*(a+i)------evabeo kora jabe

        if(a[i]<mn)mn=a[i];  //*(a+i)------evabeo kora jabe
    }

    printf("%d %d\n",mn,mx);
} 
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    max_min(&a[0],n);   // max_min(a,n); -----evabeo kora jabe
    return 0;
}




// #include <stdio.h>
// #include <limits.h>
// void max_min()
// {
//     int n;
//     scanf("%d", &n);

//     int mx = INT_MIN;
//     int mn = INT_MAX;

//     int a[n + 1];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);

//         if (a[i]>mx)mx=a[i];

//         if (a[i]<mn)mn=a[i];
//     }

//     printf("%d %d\n",mn,mx);
// }
// int main()
// {
//     max_min();
//     return 0;
// }

//Ager Code
// #include <stdio.h>
// #include <limits.h>
// void max_min()
// {
//     int n;
//     scanf("%d", &n);

//     int mx = INT_MIN;
//     int mn = INT_MAX;

//     int a[n + 1];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);

//         if (a[i]>mx)mx=a[i];

//         if (a[i]<mn)mn=a[i];
//     }

//     printf("%d %d\n",mn,mx);
// }
// int main()
// {
//     max_min();
//     return 0;
// }