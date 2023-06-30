#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    char d, e;
    cin >> a >> d >> b >> e >> c;

    if(d=='+')
    {
        if(a+b==c)cout<<"Yes"<<endl;
        else cout<<a+b<<endl;
    }
    else if(d=='-')
    {
        if(a-b==c)cout<<"Yes"<<endl;
        else cout<<a-b<<endl;
    }
    else if(d=='*')
    {
        if(a*b==c)cout<<"Yes"<<endl;
        else cout<<a*b<<endl;
    }
    return 0;
}

//Previous Code
// #include<stdio.h>
// int main()
// {
//     int A,B,C,D;
//     char S,Q;

//     scanf("%d",&A);
//     getchar();
//     scanf("%c",&S);
//     getchar();
//     scanf("%d",&B);
//     getchar();
//     scanf("%c",&Q);
//     getchar();
//     scanf("%d",&C);

//     if(S == '+')
//     {
//         D = A+B;
//     }
//     else if(S == '-')
//     {
//         D =A-B;
//     }
//     else if(S == '*')
//     {
//         D =A*B;
//     }

//     if(C == D)
//     {
//         printf("Yes\n");
//     }
//     else{
//         printf("%d\n", D);
//     }


//     return 0;
// }