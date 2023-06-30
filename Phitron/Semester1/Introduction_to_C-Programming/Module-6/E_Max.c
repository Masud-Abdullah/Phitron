//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E

#include<stdio.h>
#include<limits.h>
int main()
{
     int n;
     scanf("%d",&n);
     int a,max=0;
    //int max=INT_MIN,min=INT_MAX; er jonno header file a #include<limits.h> add korte hobe 
     for(int i=1;i<=n;i++)
     {
        scanf("%d",&a);
        if(a>max)max=a;
     }
     printf("%d\n",max);
    return 0;
}
// #include<stdio.h>
// #include<limits.h>
// int main()
// {
//      int n;
//      scanf("%d",&n);
//     int a,max=INT_MIN,min=INT_MAX; 
//     //er jonno header file a #include<limits.h> add korte hobe 
//      for(int i=1;i<=n;i++)
//      {
//         scanf("%d",&a);
//         if(a>max)max=a;

//         if(a<min)min=a;
//      }
//      printf("%d %d\n",max,min);
//     return 0;
// }