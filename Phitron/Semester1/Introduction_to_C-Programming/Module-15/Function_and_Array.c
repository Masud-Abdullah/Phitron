#include <stdio.h>
// void fun(int ar[])
// {
//      int sz=sizeof(ar)/sizeof(int);
//      printf("%d\n",sz); //output 1 ashbe. karon ekhane just array er first index ta ashbe.
// ekhon eta chaile array er first index er address er maddhome baki index gulao access korte
// parbe but array er size na janar karone ekhane array er size ber kora possible na.
// }
void fun(int ar[], int n)   // size recieve korar jonno size name er variable declare kora hoise 
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]); // or evabeo kora jabe printf("%d ", i[ar]);
    }
    printf("\n");
}

void fun_2(int *ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ar+i));  // or evabeo kora jabe printf("%d ", *(i+ar);
    }
}
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    //  int sz=sizeof(ar)/sizeof(int);
    //  printf("%d\n",sz);  //output 5 ashbe.
    fun(ar, 5);
    fun_2(&ar[0], 5);

    return 0;
}

// void fun(int *ar, int n)  //or evabeo kora jabe-- void fun(int *ar, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", ar[i]);  // or evabeo kora jabe printf("%d ", *(ar+i));
//     }
// }
// int main()
// {
//     int ar[5] = {10, 20, 30, 40, 50};
//     //  int sz=sizeof(ar)/sizeof(int);
//     //  printf("%d\n",sz);  //output 5 ashbe.
//     fun(&ar[0], 5);

//     return 0;
// }