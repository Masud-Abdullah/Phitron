// problem-01
// #include<stdio.h>
// int main()
// {
//     printf("I Love Practice\n");
//     return 0;
// }

//problem-02
// #include<stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int sum=a+b;
//     printf("%d\n",sum);
//     return 0;
// }

//Problem-03
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++)
//     {
//         printf("I Love Practice\n");
//     }
    
//     return 0;
// }

//Problem-04
#include<stdio.h>
int main()
{
    int A;
    long long int B; 
    float C;
    char D;
    scanf("%d %lld %f %c",&A,&B,&C,&D);
    // scanf("%d",&A);
    // scanf("%lld",&B);
    // scanf("%f",&C);
    // getchar();
    // scanf("%c",&D);

    printf("%d\n",A);
    printf("%lld\n",B);
    printf("%0.2f\n",C);
    printf("%c\n",D);
    
    return 0;
}
// 100
// 1234567891234567
// 23.5675
// A
//Problem-5
// #include<stdio.h>
// int main()
//  {
//      int n;
//      scanf("%d",&n);

//      for(int i=1;i<=n;i++)
//      {
//         if(i%5==0)
//         {
//             printf("%d Yes\n",i);
//         }
//         else  printf("%d No\n",i);
//      }
    
//      return 0;
//  }