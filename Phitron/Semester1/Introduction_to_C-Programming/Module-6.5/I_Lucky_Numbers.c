//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

#include<stdio.h>
int main()
{
     int x;
     scanf("%d",&x);
///V.V.I- duita digit er moddhe konota zero hole always last digit tai zero hobe.
///tai condition a age a%b na diye age b%a hobe. otherwise runtime error hobe.
     int a=x/10;
     int b=x%10;

     if(b%a==0 || a%b==0)printf("YES\n");
     else printf("NO\n");
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int n,div,rem;
//     scanf("%d",&n);

//     rem=n%10;
//     div=n/10;

//     if(rem%div==0 || div%rem==0)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }

//     return 0;
// }