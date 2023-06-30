#include <stdio.h>
void fun(int a[], int i)
{
    if (i == -1)  //Base Case
        return;
    if (i % 2 == 0)   //Normal Way
    {
        if (i == 0)
        {
            printf("%d ", a[i]);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }
    fun(a, i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 5];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    fun(a, n-1);
    return 0;
}

// #include <stdio.h>
// void fun(int a[], int i, int n)
// {
//     if (i == n)   //Base Case
//         return;
//     fun(a, i + 1, n);
//     if (i % 2 == 0)   //Reverse Way
//     {
//         if (i == 1)
//         {
//             printf("%d ", a[i]);
//         }
//         else
//         {
//             printf("%d ", a[i]);
//         }
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n + 5];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     fun(a, 0, n);
//     return 0;
// }