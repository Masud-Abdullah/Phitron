#include <stdio.h>
#include <math.h>
#include <stdlib.h> //when we will use abs() function that time we have to use this header file
int main()
{
     double a;
     scanf("%lf",&a);

     int ans=ceil(a);
     printf("%d\n",ans);

     ans =floor(a);
     printf("%d\n",ans);

     ans =round(a); // round er khetre 0.5 ba er shoman hole ceil otherwise floor
     printf("%d\n",ans);

    //----------------sqrt-----------------------
    // int x;
    // scanf("%d", &x);
    // int ans = sqrt(x); // sqrt function double value return kore.but amra int data type er variable a sqrt er value store korle sheita int akarei save hobe.
    // printf("%d\n", ans);

    // double y;
    // scanf("%lf", &y);
    // double ans = sqrt(y);
    // printf("%.2lf\n", ans);

    //------------------------cbrt----------------------------
    // int x;
    // scanf("%d",&x);
    // int ans=cbrt(x);// sqrt function double value return kore.but amra int data type er variable a sqrt er value store korle sheita int akarei save hobe.
    // printf("%d\n",ans);

    // double y;
    // scanf("%lf", &y);
    // double ans = cbrt(y);
    // printf("%.2lf\n", ans);

    //-----------------------pow function-------------------------
    // double a,b;
    // scanf("%lf%lf",&a,&b);
    // double ans=pow(a,b);
    // printf("%lf\n",ans);

    // int a , b ;
    // scanf("%d%d",&a,&b);
    // // int ans = ceil(pow(a,b));
    // ans = pow(a * 1.0, b * 1.0);
    // printf("Power: %d\n", ans);

    //---------------------abs() function----------------------

    // int value = -5;
    // int ans = abs(value); // #include<stdlib.h>

    // // long long hole -1 dara gun kore nite hbe if(val<0) val = val*-1;

    // printf("%d\n",ans);

    return 0;
}